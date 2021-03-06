
#include "Ar9287EepromParameter.h"

static struct _StructPrint Ar9287EepromList[]=
{
#if 1
	{Ar9287EepromLength,offsetof(ar9287_eeprom_t,baseEepHeader.length),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromChecksum,offsetof(ar9287_eeprom_t,baseEepHeader.checksum),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromVersion,offsetof(ar9287_eeprom_t,baseEepHeader.version),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromOpFlags,offsetof(ar9287_eeprom_t,baseEepHeader.opCapFlags),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromEepMisc,offsetof(ar9287_eeprom_t,baseEepHeader.eepMisc),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromRegulatoryDomain,offsetof(ar9287_eeprom_t,baseEepHeader.regDmn),sizeof(u_int16_t),2,1,1,'x',1,-1,-1,0},	
	{Ar9287EepromMacAddress,offsetof(ar9287_eeprom_t,baseEepHeader.macAddr),6,sizeof(u_int8_t),1,1,'m',1,-1,-1,0},
	{Ar9287EepromTxRxMaskRx,offsetof(ar9287_eeprom_t,baseEepHeader.rxMask),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromTxRxMaskTx,offsetof(ar9287_eeprom_t,baseEepHeader.txMask),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromRfSilent,offsetof(ar9287_eeprom_t,baseEepHeader.rfSilent),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromBlueToothOptions,offsetof(ar9287_eeprom_t,baseEepHeader.blueToothOptions),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromDeviceCapability,offsetof(ar9287_eeprom_t,baseEepHeader.deviceCap),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromBinBuildNumber,offsetof(ar9287_eeprom_t,baseEepHeader.binBuildNumber),sizeof(u_int32_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromDeviceType,offsetof(ar9287_eeprom_t,baseEepHeader.deviceType),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromOpenLoopPwrCntl,offsetof(ar9287_eeprom_t,baseEepHeader.openLoopPwrCntl),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287EepromPowerTableOffset,offsetof(ar9287_eeprom_t,baseEepHeader.pwrTableOffset),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzTemperatureSlope,offsetof(ar9287_eeprom_t,baseEepHeader.tempSensSlope),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzTemperatureSlopePalOn,offsetof(ar9287_eeprom_t,baseEepHeader.tempSensSlopePalOn),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzFutureBase,offsetof(ar9287_eeprom_t,baseEepHeader.futureBase),sizeof(u_int8_t),29,1,1,'x',1,-1,-1,0},
	{Ar9287EepromCustomerData,offsetof(ar9287_eeprom_t,custData),AR9287_DATA_SZ,sizeof(unsigned char),1,1,'t',1,-1,-1,0},
	{Ar9287Eeprom2GHzAntennaControlChain,offsetof(ar9287_eeprom_t,modalHeader.antCtrlChain),sizeof(u_int32_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzAntennaControlCommon,offsetof(ar9287_eeprom_t,modalHeader.antCtrlCommon),sizeof(u_int32_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzAntennaGain,offsetof(ar9287_eeprom_t,modalHeader.antennaGainCh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzSwitchSettling,offsetof(ar9287_eeprom_t,modalHeader.switchSettling),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHztxRxAttenCh,offsetof(ar9287_eeprom_t,modalHeader.txRxAttenCh),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHztxrxTxMarginCh,offsetof(ar9287_eeprom_t,modalHeader.rxTxMarginCh),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzAdcSize,offsetof(ar9287_eeprom_t,modalHeader.adcDesiredSize),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzTxEndToXpaOff,offsetof(ar9287_eeprom_t,modalHeader.txEndToXpaOff),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTxEndToRxOn,offsetof(ar9287_eeprom_t,modalHeader.txEndToRxOn),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTxFrameToXpaOn,offsetof(ar9287_eeprom_t,modalHeader.txFrameToXpaOn),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzThresh62,offsetof(ar9287_eeprom_t,modalHeader.thresh62),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzNoiseFloorThreshold,offsetof(ar9287_eeprom_t,modalHeader.noiseFloorThreshCh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzXpdGain,offsetof(ar9287_eeprom_t,modalHeader.xpdGain),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzXpd,offsetof(ar9287_eeprom_t,modalHeader.xpd),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzIqCalICh,offsetof(ar9287_eeprom_t,modalHeader.iqCalICh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzIqCalQCh,offsetof(ar9287_eeprom_t,modalHeader.iqCalQCh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{Ar9287Eeprom2GHzPdGainOverlap,offsetof(ar9287_eeprom_t,modalHeader.pdGainOverlap),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzXpaBiasLevel,offsetof(ar9287_eeprom_t,modalHeader.xpaBiasLvl),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTxFrameToDataStart,offsetof(ar9287_eeprom_t,modalHeader.txFrameToDataStart),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTxFrameToPaOn,offsetof(ar9287_eeprom_t,modalHeader.txFrameToPaOn),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzHt40PowerIncForPdadc,offsetof(ar9287_eeprom_t,modalHeader.ht40PowerIncForPdadc),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzBswAtten,offsetof(ar9287_eeprom_t,modalHeader.bswAtten),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzBswMargin,offsetof(ar9287_eeprom_t,modalHeader.bswMargin),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzSwSettleHt40,offsetof(ar9287_eeprom_t,modalHeader.swSettleHt40),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzModalHeaderVersion,offsetof(ar9287_eeprom_t,modalHeader.version),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzDb1,offsetof(ar9287_eeprom_t,modalHeader.db1),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzDb2,offsetof(ar9287_eeprom_t,modalHeader.db2),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzObcck,offsetof(ar9287_eeprom_t,modalHeader.ob_cck),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzObPsk,offsetof(ar9287_eeprom_t,modalHeader.ob_psk),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzObQam,offsetof(ar9287_eeprom_t,modalHeader.ob_qam),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzObPalOff,offsetof(ar9287_eeprom_t,modalHeader.ob_pal_off),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzFutureModal,offsetof(ar9287_eeprom_t,modalHeader.futureModal),sizeof(u_int8_t),30,1,1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzSpur,offsetof(ar9287_eeprom_t,modalHeader.spurChans)+offsetof(SPUR_CHAN,spurChan),sizeof(u_int16_t),AR9287_EEPROM_MODAL_SPURS,1,1,'x',sizeof(SPUR_CHAN),-1,-1,0},
	{Ar9287Eeprom2GHzSpurRangeLow,offsetof(ar9287_eeprom_t,modalHeader.spurChans)+offsetof(SPUR_CHAN,spurRangeLow),sizeof(u_int16_t),AR9287_EEPROM_MODAL_SPURS,1,1,'x',sizeof(SPUR_CHAN),-1,-1,0},
	{Ar9287Eeprom2GHzSpurRangeHigh,offsetof(ar9287_eeprom_t,modalHeader.spurChans)+offsetof(SPUR_CHAN,spurRangeHigh),sizeof(u_int16_t),AR9287_EEPROM_MODAL_SPURS,1,1,'x',sizeof(SPUR_CHAN),-1,-1,0},
	{Ar9287Eeprom2GHzCalibrationFrequency,offsetof(ar9287_eeprom_t,calFreqPier2G),sizeof(u_int8_t),AR9287_NUM_2G_CAL_PIERS,1,1,'2',1,-1,-1,0},
#if 1
	{Ar9287Eeprom2GHzCalibrationData,offsetof(ar9287_eeprom_t,calPierData2G),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,sizeof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287),'d',1,-1,-1,0},
#else
	{Ar9287Eeprom2GHzPowerCorrection,offsetof(ar9287_eeprom_t,calPierData2G)+offsetof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287,pwrPdg),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,1,'d',10,-1,-1,0},
	{Ar9287Eeprom2GHzCalibrationTemperature,offsetof(ar9287_eeprom_t,calPierData2G)+offsetof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287,vpdPdg),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,1,'d',10,-1,-1,0},
	{Ar9287Eeprom2GHzCalibrationPcdac,offsetof(ar9287_eeprom_t,calPierData2G)+offsetof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287,pcdac),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,1,'d',10,-1,-1,0},

	//{Ar9287Eeprom2GHzPowerCorrection,offsetof(CAL_DATA_PER_FREQ_U_AR9287,calDataOpen)+offsetof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287,pwrPdg),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,1,'d',1,-1,-1,0},
	//{Ar9287Eeprom2GHzCalibrationTemperature,offsetof(CAL_DATA_PER_FREQ_U_AR9287,calDataOpen)+offsetof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287,vpdPdg),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,1,'d',1,-1,-1,0},
	//{Ar9287Eeprom2GHzCalibrationPcdac,offsetof(CAL_DATA_PER_FREQ_U_AR9287,calDataOpen)+offsetof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287,pcdac),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,1,'d',1,-1,-1,0},
#endif

	{Ar9287Eeprom2GHzTargetDataCck,offsetof(ar9287_eeprom_t,calTargetPowerCck),sizeof(u_int8_t),AR9287_NUM_2G_CCK_TARGET_POWERS,sizeof(CAL_TARGET_POWER_LEG),1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTargetData,offsetof(ar9287_eeprom_t,calTargetPower2G),sizeof(u_int8_t),AR9287_NUM_2G_20_TARGET_POWERS,sizeof(CAL_TARGET_POWER_LEG),1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTargetDataHt20,offsetof(ar9287_eeprom_t,calTargetPower2GHT20),sizeof(u_int8_t),AR9287_NUM_2G_20_TARGET_POWERS,sizeof(CAL_TARGET_POWER_HT),1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzTargetDataHt40,offsetof(ar9287_eeprom_t,calTargetPower2GHT40),sizeof(u_int8_t),AR9287_NUM_2G_40_TARGET_POWERS,sizeof(CAL_TARGET_POWER_HT),1,'x',1,-1,-1,0},
	{Ar9287Eeprom2GHzCtlIndex,offsetof(ar9287_eeprom_t,ctlIndex),sizeof(u_int8_t),AR9287_NUM_CTLS,1,1,'x',1,-1,-1,0},

	{Ar9287Eeprom2GHzCtlData,offsetof(ar9287_eeprom_t,ctlData),sizeof(u_int8_t),AR9287_NUM_CTLS,sizeof(CAL_CTL_DATA_AR9287),1,'x',1,-1,-1,0},

	{Ar9287Eeprom2GHzPadding,offsetof(ar9287_eeprom_t,padding),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
#else
	{"length",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,length),sizeof(u_int16_t),1,1,1,'u',1,-1,-1,0},
	{"checksum",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,checksum),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{"version",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,version),sizeof(u_int16_t),1,1,1,'u',1,-1,-1,0},
	{"opCapFlags",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,opCapFlags),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"eepMisc",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,eepMisc),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"regDmn",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,regDmn),sizeof(u_int16_t),2,1,1,'x',1,-1,-1,0},
	{"macAddr",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,macAddr),6,sizeof(unsigned char),1,1,'m',1,-1,-1,0},
	{"rxMask",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,rxMask),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"txMask",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,txMask),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"rfSilent",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,rfSilent),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{"blueToothOptions",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,blueToothOptions),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{"deviceCap",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,deviceCap),sizeof(u_int16_t),1,1,1,'x',1,-1,-1,0},
	{"binBuildNumber",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,binBuildNumber),sizeof(u_int32_t),1,1,1,'x',1,-1,-1,0},
	{"deviceType",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,deviceType),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"openLoopPwrCntl",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,openLoopPwrCntl),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"pwrTableOffset",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,pwrTableOffset),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{"tempSensSlope",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,tempSensSlope),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{"tempSensSlopePalOn",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,tempSensSlopePalOn),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{"futureBase",offsetof(ar9287_eeprom_t,baseEepHeader)+offsetof(BASE_EEPAR9287_HEADER,futureBase),sizeof(u_int8_t),29,1,1,'x',1,-1,-1,0},
	{"custData",offsetof(ar9287_eeprom_t,custData),AR9287_DATA_SZ,sizeof(unsigned char),1,1,'t',1,-1,-1,0},
	{"antCtrlChain",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,antCtrlChain),sizeof(u_int32_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{"antCtrlCommon",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,antCtrlCommon),sizeof(u_int32_t),1,1,1,'x',1,-1,-1,0},
	{"antennaGainCh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,antennaGainCh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{"switchSettling",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,switchSettling),sizeof(u_int8_t),1,1,1,'x',1,-1,-1,0},
	{"txRxAttenCh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,txRxAttenCh),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{"rxTxMarginCh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,rxTxMarginCh),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'x',1,-1,-1,0},
	{"adcDesiredSize",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,adcDesiredSize),sizeof(int8_t),1,1,1,'d',1,-1,-1,0},
	{"txEndToXpaOff",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,txEndToXpaOff),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"txEndToRxOn",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,txEndToRxOn),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"txFrameToXpaOn",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,txFrameToXpaOn),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
 	{"thresh62",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,thresh62),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"noiseFloorThreshCh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,noiseFloorThreshCh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{"xpdGain",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,xpdGain),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"xpd",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,xpd),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"iqCalICh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,iqCalICh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{"iqCalQCh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,iqCalQCh),sizeof(int8_t),AR9287_MAX_CHAINS,1,1,'d',1,-1,-1,0},
	{"pdGainOverlap",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,pdGainOverlap),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"xpaBiasLvl",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,xpaBiasLvl),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"txFrameToDataStart",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,txFrameToDataStart),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"txFrameToPaOn",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,txFrameToPaOn),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"ht40PowerIncForPdadc",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,ht40PowerIncForPdadc),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"bswAtten",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,bswAtten),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'u',1,-1,-1,0},
	{"bswMargin",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,bswMargin),sizeof(u_int8_t),AR9287_MAX_CHAINS,1,1,'u',1,-1,-1,0},
	{"swSettleHt40",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,swSettleHt40),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"mversion",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,version),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"db1",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,db1),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"db2",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,db2),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"ob_cck",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,ob_cck),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"ob_psk",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,ob_psk),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"ob_qam",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,ob_qam),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
	{"ob_pal_off",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,ob_pal_off),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
 	{"futureModal",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,futureModal),sizeof(u_int8_t),30,1,1,'x',1,-1,-1,0},
  	{"spurChan",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,spurChans)+offsetof(SPUR_CHAN,spurChan),sizeof(u_int16_t),AR9287_EEPROM_MODAL_SPURS,1,1,'u',sizeof(SPUR_CHAN),-1,-1,0},
  	{"spurRangeLow",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,spurChans)+offsetof(SPUR_CHAN,spurRangeLow),sizeof(u_int16_t),AR9287_EEPROM_MODAL_SPURS,1,1,'u',sizeof(SPUR_CHAN),-1,-1,0},
  	{"spurRangeHigh",offsetof(ar9287_eeprom_t,modalHeader)+offsetof(MODAL_EEPAR9287_HEADER,spurChans)+offsetof(SPUR_CHAN,spurRangeHigh),sizeof(u_int16_t),AR9287_EEPROM_MODAL_SPURS,1,1,'u',sizeof(SPUR_CHAN),-1,-1,0},
	{"calFreqPier2G",offsetof(ar9287_eeprom_t,calFreqPier2G),sizeof(u_int8_t),AR9287_NUM_2G_CAL_PIERS,1,1,'2',1,-1,-1,0},
	{"calPierData2G",offsetof(ar9287_eeprom_t,calPierData2G),sizeof(u_int8_t),AR9287_MAX_CHAINS,AR9287_NUM_2G_CAL_PIERS,sizeof(CAL_DATA_PER_FREQ_OP_LOOP_AR9287),'d',1,-1,-1,0},
	{"calTargetPowerCck",offsetof(ar9287_eeprom_t,calTargetPowerCck),sizeof(u_int8_t),AR9287_NUM_2G_CCK_TARGET_POWERS,sizeof(CAL_TARGET_POWER_LEG),1,'u',1,-1,-1,0},
	{"calTargetPower2G",offsetof(ar9287_eeprom_t,calTargetPower2G),sizeof(u_int8_t),AR9287_NUM_2G_20_TARGET_POWERS,sizeof(CAL_TARGET_POWER_LEG),1,'u',1,-1,-1,0},
	{"calTargetPower2GHT20",offsetof(ar9287_eeprom_t,calTargetPower2GHT20),sizeof(u_int8_t),AR9287_NUM_2G_20_TARGET_POWERS,sizeof(CAL_TARGET_POWER_HT),1,'u',1,-1,-1,0},
	{"calTargetPower2GHT40",offsetof(ar9287_eeprom_t,calTargetPower2GHT40),sizeof(u_int8_t),AR9287_NUM_2G_40_TARGET_POWERS,sizeof(CAL_TARGET_POWER_HT),1,'u',1,-1,-1,0},
	{"ctlIndex",offsetof(ar9287_eeprom_t,ctlIndex),sizeof(u_int8_t),AR9287_NUM_CTLS,1,1,'u',1,-1,-1,0},
	{"ctlData",offsetof(ar9287_eeprom_t,ctlData),sizeof(u_int8_t),AR9287_NUM_CTLS,sizeof(CAL_CTL_DATA_AR9287),1,'u',1,-1,-1,0},
	{"padding",offsetof(ar9287_eeprom_t,padding),sizeof(u_int8_t),1,1,1,'u',1,-1,-1,0},
#endif
};

