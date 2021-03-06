/******************************************************************************

                  版权所有 (C), 2001-2011, 上海寰创通信股份有限公司

 ******************************************************************************
  文 件 名   : gpioex_ioctl_main.h
  版 本 号   : 初稿
  作    者   : Zhong Huaqing
  生成日期   : 2012年8月10日 星期五
  最近修改   :
  功能描述   : gpioex_ioctl_main.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年8月10日 星期五
    作    者   : Zhong Huaqing
    修改内容   : 创建文件

******************************************************************************/

#ifndef __GPIOEX_IOCTL_MAIN_H__
#define __GPIOEX_IOCTL_MAIN_H__


/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/
#include "ap_types.h"

/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 基础类型定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/


 /*----------------------------------------------*
 * 宏操作                                       *
 *----------------------------------------------*/
 /*字符串比较*/
#define STR_MATCH(szStr1, szStr2) (0 == strcmp(szStr1, szStr2))
/*限定长度的字符串比较*/
#define STR_NMATCH(szStr1, szStr2, uiSize) (0 == strncmp(szStr1, szStr2, uiSize))
/*内存块比较*/
#define MEM_MATCH(uiAddr1, uiAddr2, uiSize) (0 == memcmp(uiAddr1, uiAddr2, uiSize))


#define HERE {printf("%s:%d\n", __FUNCTION__, __LINE__);}
 
/*----------------------------------------------*
 * 枚举定义                                       *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 扩展类型定义                                     *
 *----------------------------------------------*/


/*----------------------------------------------*
 * 结构定义                                       *
 *----------------------------------------------*/
typedef struct 
{
	const CHAR *szCmdName;
	AP_ERROR_CODE_E (*fHandler)(INT32 iArgc, CHAR *apcArgv[]);
	const CHAR *szCmdFmt;  /*描述子命令格式*/
	const CHAR *szHelpInfo;   /*描述帮助信息*/
} GPIOEX_CMD_T;



/*----------------------------------------------*
 * 导出函数原型说明                             *
 *----------------------------------------------*/



#endif /* __GPIOEX_IOCTL_MAIN_H__ */


