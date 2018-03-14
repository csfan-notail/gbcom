/******************************************************************************

                  版权所有 (C), 2010-2012, 上海寰创通信科技有限公司

 ******************************************************************************
  文 件 名   : traffic_monitor.h
  版 本 号   : 初稿
  作    者   : 董鹏
  生成日期   : 2012年8月23日 星期四
  最近修改   :
  功能描述   : traffic_monitor.h的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年9月6日 星期四
    作    者   : 张平
    修改内容   : 创建文件

******************************************************************************/
#ifndef __TRAFFIC_MONITOR_H__
#define __TRAFFIC_MONITOR_H__
/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/
REMOTE INT32 ap_netlink_send(void *pvData, INT32 iDataLen);      
REMOTE unsigned int (*traffic_monitor_hook)(struct sk_buff *skb);

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/
typedef struct 
{   
    UINT32 uiCmd;

    union{    
        UINT32  uiIpaddr;
        UINT32  uiTime;
        UINT32  uiConnectStat;
    }unData;
}AP_EVENT_BSP_LTE_FLOW_DATA_T;
/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/
#define TRAFFIC_MONITOR_FILENAME    "traffic_monitor"

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/
#endif /* __AP_NETLINK_H__ */

