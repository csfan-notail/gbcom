//-----------------------------------------------------------------------------

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "wlantype.h"
#include "eepromUtil_1.h"

// defines

// globals & static

// function definitions

// TBD: find a better way than macro (to avoid any future trouble)
#define PARSE_BIN_COMM(size) \
    int i; \
    _printf("%s ", EepTempEntries[entry].key); \
    fprintf(fp, "%s ", EepTempEntries[entry].key); \
    for (i=0;i<EepTempEntries[entry].num;i++) { \
        memcpy((void*)&value, (void*)(&pData[*pos]), (size_t)(size)); \
        *pos +=(size); \
        if (EepTempEntries[entry].hex == EEP_HEX_VAL) {\
            _printf("0x%x ", value); \
            fprintf(fp, "0x%x ", value); \
        }\
        else if (EepTempEntries[entry].hex == EEP_DEC_VAL) {\
            _printf("%d ", value); \
            fprintf(fp, "%d ", value); \
        }\
    } \
    _printf("\n");\
    fprintf(fp,"\n");

A_BOOL parse_bin_uint8(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{ 
    A_UINT8 value;
    PARSE_BIN_COMM(1);
    return TRUE;
}

A_BOOL parse_bin_uint32(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_UINT32 value;
    PARSE_BIN_COMM(4);
    return TRUE;
}


A_BOOL parse_bin_int8(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_INT8 value;
    PARSE_BIN_COMM(1);
    return TRUE;
}

A_BOOL parse_bin_int16(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_INT16 value;
    PARSE_BIN_COMM(2);
    return TRUE;
}

A_BOOL parse_bin_int32(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_INT32 value;
    PARSE_BIN_COMM(4);
    return TRUE;
}

A_BOOL parse_bin_char(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_UCHAR value;
    PARSE_BIN_COMM(1);
    return TRUE;
}

A_BOOL parse_bin_uint16(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_UINT16 value;
    PARSE_BIN_COMM(2);
    return TRUE;
}

A_BOOL printBitFields(FILE *fp, EEPROM_TEMP *eeprom, EEP_TYPE_BIT_FIELD *bitField, A_UINT32 value)
{
    A_UINT32 i;
    A_UINT32 mask;

    fprintf(fp,"%s ",eeprom->key);
    _printf("%s ",eeprom->key);

    for (i=0;i<bitField->numFields;i++) {
        mask = (1 << bitField->numBits[i]) - 1;
        if (eeprom->hex == EEP_HEX_VAL) {
            _printf("%s:0x%x ", bitField->name[i],value & mask);
            fprintf(fp, "%s:0x%x ", bitField->name[i],value & mask);
        }
        else if (eeprom->hex == EEP_DEC_VAL) {
            _printf("%s:%d ", bitField->name[i],value & mask);
            fprintf(fp, "%s:%d ", bitField->name[i],value & mask);
        }
        value >>= bitField->numBits[i];
    }
    _printf("\n");
    fprintf(fp,"\n");
	return TRUE;
}

A_BOOL parse_bin_bitfield(FILE *fp, int entry, A_UINT8 *pData, int *pos)
{
    A_UINT32 i;
    A_UINT32 value=0;
    A_UINT8 size;
    A_UINT8 numBits=0;
    EEP_TYPE_BIT_FIELD *bitField=(EEP_TYPE_BIT_FIELD*)EepTempEntries[entry].extra;

    for (i=0;i<bitField->numFields;i++) {
        numBits += (bitField->numBits[i]);
    }
    size = (numBits + 7) / 8;
    if (size > sizeof(A_UINT32))
        size = sizeof(A_UINT32);

    memcpy((void*)&value, (void*)(&pData[*pos]), (size_t)(size));
    *pos +=(size);

    printBitFields(fp,&EepTempEntries[entry],bitField,value);

    return TRUE;
}

typedef A_BOOL (*ParseBinFunc)(FILE *fp, int entry, A_UINT8 *pData, int *pos);
ParseBinFunc EepParserFunc[] = {
    parse_bin_uint8, 
    parse_bin_uint16,
    parse_bin_uint32,
    parse_bin_int8, 
    parse_bin_int16,
    parse_bin_int32,
    parse_bin_char, 
    parse_bin_bitfield, 
};

EEPROMUTILDLLSPEC A_BOOL parseBin(A_UINT8 *pData, int numBytes, char *fileName) 
{
    int i;
    int pos=0;
    FILE *fp;

    if( (fp = fopen(fileName, "w")) == NULL) {
        printf("Could not open %s to write\n", fileName);
        return FALSE;
    }

    for (i=0;i<MaxTempEntries;i++) {
        EepParserFunc[EepTempEntries[i].type](fp, i, pData, &pos); 
    }

    _printf(" parsed %d input %d\n", pos, numBytes);
    if (pos != numBytes) {
        printf("parsed %d not equal given %d bytes\n", pos, numBytes);
    }
    fclose(fp);

    return TRUE;
}

