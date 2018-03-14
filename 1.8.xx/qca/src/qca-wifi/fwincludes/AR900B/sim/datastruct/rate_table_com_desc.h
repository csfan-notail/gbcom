// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RATE_TABLE_COM_DESC_H_
#define _RATE_TABLE_COM_DESC_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	entry_a_20_valid[0], entry_a_40_valid[1], entry_a_80_valid[2], entry_b_20_valid[3], entry_b_40_valid[4], entry_b_80_valid[5], entry_c_20_valid[6], entry_c_40_valid[7], entry_c_80_valid[8], entry_d_20_valid[9], entry_d_40_valid[10], entry_d_80_valid[11], mpdu_retry_cnt_range_a[16:12], mpdu_retry_cnt_range_b[21:17], mpdu_retry_cnt_range_c[26:22], reserved[31:27]
//	1	sch_retry_cnt_range_a[3:0], sch_retry_cnt_range_b[7:4], sch_retry_cnt_range_c[11:8], ppdu_per_range_a[15:12], ppdu_per_range_b[19:16], ppdu_per_range_c[23:20], reserved_1[31:24]
//	2	max_fes_time[15:0], max_ppdu_time[31:16]
//	3	max_ampdu_size[19:0], reserved_4[24:20], max_mpdu_cnt[31:25]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RATE_TABLE_COM_DESC 4

struct rate_table_com_desc {
    volatile uint32_t entry_a_20_valid                :  1, //[0]
                      entry_a_40_valid                :  1, //[1]
                      entry_a_80_valid                :  1, //[2]
                      entry_b_20_valid                :  1, //[3]
                      entry_b_40_valid                :  1, //[4]
                      entry_b_80_valid                :  1, //[5]
                      entry_c_20_valid                :  1, //[6]
                      entry_c_40_valid                :  1, //[7]
                      entry_c_80_valid                :  1, //[8]
                      entry_d_20_valid                :  1, //[9]
                      entry_d_40_valid                :  1, //[10]
                      entry_d_80_valid                :  1, //[11]
                      mpdu_retry_cnt_range_a          :  5, //[16:12]
                      mpdu_retry_cnt_range_b          :  5, //[21:17]
                      mpdu_retry_cnt_range_c          :  5, //[26:22]
                      reserved                        :  5; //[31:27]
    volatile uint32_t sch_retry_cnt_range_a           :  4, //[3:0]
                      sch_retry_cnt_range_b           :  4, //[7:4]
                      sch_retry_cnt_range_c           :  4, //[11:8]
                      ppdu_per_range_a                :  4, //[15:12]
                      ppdu_per_range_b                :  4, //[19:16]
                      ppdu_per_range_c                :  4, //[23:20]
                      reserved_1                      :  8; //[31:24]
    volatile uint32_t max_fes_time                    : 16, //[15:0]
                      max_ppdu_time                   : 16; //[31:16]
    volatile uint32_t max_ampdu_size                  : 20, //[19:0]
                      reserved_4                      :  5, //[24:20]
                      max_mpdu_cnt                    :  7; //[31:25]
};

/*

entry_a_20_valid
			
			0: Column A_20 is not valid
			
			1: Column A_20 contains valid rate entries
			
			 <legal all>

entry_a_40_valid
			
			0: Column A_40 is not valid
			
			1: Column A_40 contains valid rate entries
			
			 <legal all>

entry_a_80_valid
			
			0: Column A_80 is not valid
			
			1: Column A_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>

entry_b_20_valid
			
			0: Column B_20 is not valid
			
			1: Column B_20 contains valid rate entries
			
			 <legal all>

entry_b_40_valid
			
			0: Column B_40 is not valid
			
			1: Column B_40 contains valid rate entries
			
			 <legal all>

entry_b_80_valid
			
			0: Column B_80 is not valid
			
			1: Column B_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>

entry_c_20_valid
			
			0: Column C_20 is not valid
			
			1: Column C_20 contains valid rate entries
			
			 <legal all>

entry_c_40_valid
			
			0: Column C_40 is not valid
			
			1: Column C_40 contains valid rate entries
			
			 <legal all>

entry_c_80_valid
			
			0: Column C_80 is not valid
			
			1: Column C_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>

entry_d_20_valid
			
			0: Column D_20 is not valid
			
			1: Column D_20 contains valid rate entries
			
			 <legal all>

entry_d_40_valid
			
			0: Column D_40 is not valid
			
			1: Column D_40 contains valid rate entries
			
			 <legal all>

entry_d_80_valid
			
			0: Column D_80 is not valid
			
			1: Column D_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>

mpdu_retry_cnt_range_a
			
			Queue head MPDU retry count smaller or equal to this
			value, will result in column A to be selected.
			
			<legal all>

mpdu_retry_cnt_range_b
			
			When mpdu_retry_cnt_range_A condition has NOT been met,
			but the queue head MPDU retry count is smaller or equal to
			this value, column B will be selected.

mpdu_retry_cnt_range_c
			
			When mpdu_retry_cnt_range_B condition has NOT been met,
			but the queue head MPDU retry count is smaller or equal to
			this value, column C will be selected.
			
			If also this condition is NOT met, Column D will
			automatically be selected as the last remaining candidate.

reserved
			

sch_retry_cnt_range_a
			
			Schedule retry count smaller or equal to this value,
			will result in column A to be selected.
			
			<legal all>

sch_retry_cnt_range_b
			
			When sch_retry_cnt_range_A condition has NOT been met,
			but the schedule retry count is smaller or equal to this
			value, column B will be selected.

sch_retry_cnt_range_c
			
			When sch_retry_cnt_range_B condition has NOT been met,
			but the schedule retry count is smaller or equal to this
			value, column C will be selected.
			
			If also this condition is NOT met, Column D will
			automatically be selected as the last remaining candidate.

ppdu_per_range_a
			
			Previous transmitted PPDU PER (in sequential scheduling
			commands for the same QID) smaller or value equal to this
			value, will result in column A to be selected.
			
			<legal all>

ppdu_per_range_b
			
			When PPDU_PER_range_A condition has NOT been met, but
			the previous transmitted PPDU PER (in sequential scheduling
			commands for the same QID) is smaller or equal to this
			value, will result in column B to be selected.

ppdu_per_range_c
			
			When PPDU_PER_range_B condition has NOT been met, but
			the previous transmitted PPDU PER (in sequential scheduling
			commands for the same QID) is smaller or equal to this
			value, will result in column C to be selected.
			
			If also this condition is NOT met, Column D will
			automatically be selected as the last remaining candidate.

reserved_1
			
			FW will set to 0, MAC will ignore.  <legal 0>

max_fes_time
			
			The maximum medium time (in us) that the total Frame
			exchange sequence is allowed to take.  <legal all>

max_ppdu_time
			
			The maximum medium time (in us) that the PPDU Frame is
			allowed to take.

max_ampdu_size
			
			The maximum number of bytes in the PPDU transmission.

reserved_4
			
			FW will set to 0, MAC will ignore.  <legal 0>

max_mpdu_cnt
			
			The maximum number of MPDUs in the PPDU transmission.
			
			Note: This is different than A-MPDU window size given in
			the Queue extension descriptor. This field allows per
			scheduler command fine-tuning control.
*/


/* Description		RATE_TABLE_COM_DESC_0_ENTRY_A_20_VALID
			
			0: Column A_20 is not valid
			
			1: Column A_20 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_A_20_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_A_20_VALID_LSB                   0
#define RATE_TABLE_COM_DESC_0_ENTRY_A_20_VALID_MASK                  0x00000001

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_A_40_VALID
			
			0: Column A_40 is not valid
			
			1: Column A_40 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_A_40_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_A_40_VALID_LSB                   1
#define RATE_TABLE_COM_DESC_0_ENTRY_A_40_VALID_MASK                  0x00000002

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_A_80_VALID
			
			0: Column A_80 is not valid
			
			1: Column A_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_A_80_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_A_80_VALID_LSB                   2
#define RATE_TABLE_COM_DESC_0_ENTRY_A_80_VALID_MASK                  0x00000004

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_B_20_VALID
			
			0: Column B_20 is not valid
			
			1: Column B_20 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_B_20_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_B_20_VALID_LSB                   3
#define RATE_TABLE_COM_DESC_0_ENTRY_B_20_VALID_MASK                  0x00000008

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_B_40_VALID
			
			0: Column B_40 is not valid
			
			1: Column B_40 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_B_40_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_B_40_VALID_LSB                   4
#define RATE_TABLE_COM_DESC_0_ENTRY_B_40_VALID_MASK                  0x00000010

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_B_80_VALID
			
			0: Column B_80 is not valid
			
			1: Column B_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_B_80_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_B_80_VALID_LSB                   5
#define RATE_TABLE_COM_DESC_0_ENTRY_B_80_VALID_MASK                  0x00000020

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_C_20_VALID
			
			0: Column C_20 is not valid
			
			1: Column C_20 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_C_20_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_C_20_VALID_LSB                   6
#define RATE_TABLE_COM_DESC_0_ENTRY_C_20_VALID_MASK                  0x00000040

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_C_40_VALID
			
			0: Column C_40 is not valid
			
			1: Column C_40 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_C_40_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_C_40_VALID_LSB                   7
#define RATE_TABLE_COM_DESC_0_ENTRY_C_40_VALID_MASK                  0x00000080

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_C_80_VALID
			
			0: Column C_80 is not valid
			
			1: Column C_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_C_80_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_C_80_VALID_LSB                   8
#define RATE_TABLE_COM_DESC_0_ENTRY_C_80_VALID_MASK                  0x00000100

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_D_20_VALID
			
			0: Column D_20 is not valid
			
			1: Column D_20 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_D_20_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_D_20_VALID_LSB                   9
#define RATE_TABLE_COM_DESC_0_ENTRY_D_20_VALID_MASK                  0x00000200

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_D_40_VALID
			
			0: Column D_40 is not valid
			
			1: Column D_40 contains valid rate entries
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_D_40_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_D_40_VALID_LSB                   10
#define RATE_TABLE_COM_DESC_0_ENTRY_D_40_VALID_MASK                  0x00000400

/* Description		RATE_TABLE_COM_DESC_0_ENTRY_D_80_VALID
			
			0: Column D_80 is not valid
			
			1: Column D_80 contains valid rate entries
			
			
			
			Note: If of a column all entries are invalid, the entire
			column in not used in the rate selection evaluation.
			
			 <legal all>
*/
#define RATE_TABLE_COM_DESC_0_ENTRY_D_80_VALID_OFFSET                0x00000000
#define RATE_TABLE_COM_DESC_0_ENTRY_D_80_VALID_LSB                   11
#define RATE_TABLE_COM_DESC_0_ENTRY_D_80_VALID_MASK                  0x00000800

/* Description		RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_A
			
			Queue head MPDU retry count smaller or equal to this
			value, will result in column A to be selected.
			
			<legal all>
*/
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_A_OFFSET          0x00000000
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_A_LSB             12
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_A_MASK            0x0001f000

/* Description		RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_B
			
			When mpdu_retry_cnt_range_A condition has NOT been met,
			but the queue head MPDU retry count is smaller or equal to
			this value, column B will be selected.
*/
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_B_OFFSET          0x00000000
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_B_LSB             17
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_B_MASK            0x003e0000

/* Description		RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_C
			
			When mpdu_retry_cnt_range_B condition has NOT been met,
			but the queue head MPDU retry count is smaller or equal to
			this value, column C will be selected.
			
			If also this condition is NOT met, Column D will
			automatically be selected as the last remaining candidate.
*/
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_C_OFFSET          0x00000000
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_C_LSB             22
#define RATE_TABLE_COM_DESC_0_MPDU_RETRY_CNT_RANGE_C_MASK            0x07c00000

/* Description		RATE_TABLE_COM_DESC_0_RESERVED
			
*/
#define RATE_TABLE_COM_DESC_0_RESERVED_OFFSET                        0x00000000
#define RATE_TABLE_COM_DESC_0_RESERVED_LSB                           27
#define RATE_TABLE_COM_DESC_0_RESERVED_MASK                          0xf8000000

/* Description		RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_A
			
			Schedule retry count smaller or equal to this value,
			will result in column A to be selected.
			
			<legal all>
*/
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_A_OFFSET           0x00000004
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_A_LSB              0
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_A_MASK             0x0000000f

/* Description		RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_B
			
			When sch_retry_cnt_range_A condition has NOT been met,
			but the schedule retry count is smaller or equal to this
			value, column B will be selected.
*/
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_B_OFFSET           0x00000004
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_B_LSB              4
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_B_MASK             0x000000f0

/* Description		RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_C
			
			When sch_retry_cnt_range_B condition has NOT been met,
			but the schedule retry count is smaller or equal to this
			value, column C will be selected.
			
			If also this condition is NOT met, Column D will
			automatically be selected as the last remaining candidate.
*/
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_C_OFFSET           0x00000004
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_C_LSB              8
#define RATE_TABLE_COM_DESC_1_SCH_RETRY_CNT_RANGE_C_MASK             0x00000f00

/* Description		RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_A
			
			Previous transmitted PPDU PER (in sequential scheduling
			commands for the same QID) smaller or value equal to this
			value, will result in column A to be selected.
			
			<legal all>
*/
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_A_OFFSET                0x00000004
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_A_LSB                   12
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_A_MASK                  0x0000f000

/* Description		RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_B
			
			When PPDU_PER_range_A condition has NOT been met, but
			the previous transmitted PPDU PER (in sequential scheduling
			commands for the same QID) is smaller or equal to this
			value, will result in column B to be selected.
*/
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_B_OFFSET                0x00000004
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_B_LSB                   16
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_B_MASK                  0x000f0000

/* Description		RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_C
			
			When PPDU_PER_range_B condition has NOT been met, but
			the previous transmitted PPDU PER (in sequential scheduling
			commands for the same QID) is smaller or equal to this
			value, will result in column C to be selected.
			
			If also this condition is NOT met, Column D will
			automatically be selected as the last remaining candidate.
*/
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_C_OFFSET                0x00000004
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_C_LSB                   20
#define RATE_TABLE_COM_DESC_1_PPDU_PER_RANGE_C_MASK                  0x00f00000

/* Description		RATE_TABLE_COM_DESC_1_RESERVED_1
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define RATE_TABLE_COM_DESC_1_RESERVED_1_OFFSET                      0x00000004
#define RATE_TABLE_COM_DESC_1_RESERVED_1_LSB                         24
#define RATE_TABLE_COM_DESC_1_RESERVED_1_MASK                        0xff000000

/* Description		RATE_TABLE_COM_DESC_2_MAX_FES_TIME
			
			The maximum medium time (in us) that the total Frame
			exchange sequence is allowed to take.  <legal all>
*/
#define RATE_TABLE_COM_DESC_2_MAX_FES_TIME_OFFSET                    0x00000008
#define RATE_TABLE_COM_DESC_2_MAX_FES_TIME_LSB                       0
#define RATE_TABLE_COM_DESC_2_MAX_FES_TIME_MASK                      0x0000ffff

/* Description		RATE_TABLE_COM_DESC_2_MAX_PPDU_TIME
			
			The maximum medium time (in us) that the PPDU Frame is
			allowed to take.
*/
#define RATE_TABLE_COM_DESC_2_MAX_PPDU_TIME_OFFSET                   0x00000008
#define RATE_TABLE_COM_DESC_2_MAX_PPDU_TIME_LSB                      16
#define RATE_TABLE_COM_DESC_2_MAX_PPDU_TIME_MASK                     0xffff0000

/* Description		RATE_TABLE_COM_DESC_3_MAX_AMPDU_SIZE
			
			The maximum number of bytes in the PPDU transmission.
*/
#define RATE_TABLE_COM_DESC_3_MAX_AMPDU_SIZE_OFFSET                  0x0000000c
#define RATE_TABLE_COM_DESC_3_MAX_AMPDU_SIZE_LSB                     0
#define RATE_TABLE_COM_DESC_3_MAX_AMPDU_SIZE_MASK                    0x000fffff

/* Description		RATE_TABLE_COM_DESC_3_RESERVED_4
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define RATE_TABLE_COM_DESC_3_RESERVED_4_OFFSET                      0x0000000c
#define RATE_TABLE_COM_DESC_3_RESERVED_4_LSB                         20
#define RATE_TABLE_COM_DESC_3_RESERVED_4_MASK                        0x01f00000

/* Description		RATE_TABLE_COM_DESC_3_MAX_MPDU_CNT
			
			The maximum number of MPDUs in the PPDU transmission.
			
			Note: This is different than A-MPDU window size given in
			the Queue extension descriptor. This field allows per
			scheduler command fine-tuning control.
*/
#define RATE_TABLE_COM_DESC_3_MAX_MPDU_CNT_OFFSET                    0x0000000c
#define RATE_TABLE_COM_DESC_3_MAX_MPDU_CNT_LSB                       25
#define RATE_TABLE_COM_DESC_3_MAX_MPDU_CNT_MASK                      0xfe000000


#endif // _RATE_TABLE_COM_DESC_H_