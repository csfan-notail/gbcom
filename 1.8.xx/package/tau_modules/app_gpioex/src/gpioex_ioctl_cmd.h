/******************************************************************************

                  版权所有 (C), 2001-2011, 上海寰创通信股份有限公司

 ******************************************************************************
  文 件 名   : gpioex_ioctl_cmd.h
  版 本 号   : 初稿
  作    者   : Zhong Huaqing
  生成日期   : 2012年8月10日 星期五
  最近修改   :
  功能描述   : gpioex_ioctl_cmd.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年8月10日 星期五
    作    者   : Zhong Huaqing
    修改内容   : 创建文件

******************************************************************************/

#ifndef __GPIOEX_IOCTL_CMD_H__
#define __GPIOEX_IOCTL_CMD_H__


/*----------------------------------------------*
 * 包含头文件                                   *
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
 #define ETH_ALEN	6		/* Octets in one ethernet addr	 */

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/



 /*----------------------------------------------*
 * 宏操作                                       *
 *----------------------------------------------*/
#define SHOW_SPLIT_LINE(uiNum) \
{                               \
    INT32 __tmp = uiNum;        \
    while(__tmp-- > 0){printf("-");}; \
    printf("\n");               \
};


/*----------------------------------------------*
 * 枚举定义                                       *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 扩展类型定义                                     *
 *----------------------------------------------*/


/*----------------------------------------------*
 * 结构定义                                       *
 *----------------------------------------------*/




/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 导出函数原型说明                             *
 *----------------------------------------------*/
void gpioex_show_help(CHAR *szCmdName);
GPIOEX_CMD_T *gpioex_get_cmd(CHAR *szCmdName);


#endif /* __GPIOEX_IOCTL_CMD_H__ */


