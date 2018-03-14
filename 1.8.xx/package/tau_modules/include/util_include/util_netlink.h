/******************************************************************************

                  版权所有 (C), 2010-2012, 上海寰创通信科技有限公司

 ******************************************************************************
  文 件 名   : ap_netlink.h
  版 本 号   : 初稿
  作    者   : 张平
  生成日期   : 2012年8月23日 星期四
  最近修改   :
  功能描述   : util_netlink.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年8月23日 星期四
    作    者   : 张平
    修改内容   : 创建文件

******************************************************************************/

/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/

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
 * 常量定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/

#ifndef __UTIL_NETLINK_H__
#define __UTIL_NETLINK_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/* 用户态和内核态公共宏定义 */
#define NETLINK_EVENT_PROTOCOL     30
#define NETLINK_EVENT_USERM_PROTOCOL     29
#define NETLINK_EVENT_GROUPS       1
#define DATA_BUFF_LEN_MAX          2048
#define WAIT_TIME_BLOCK            0

/*****************************************************************************
 函 数 名  : netlink_sock_init
 功能描述  : netlink初始化
 输入参数  : int netlink_proto_type  
 输出参数  : 无
 返 回 值  : static
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2012年8月23日 星期四
    作    者   : 张平
    修改内容   : 新生成函数

*****************************************************************************/
INT32 netlink_sock_init(int iNetlinkProtoType);
/*****************************************************************************
 函 数 名  : ap_netlink_recv
 功能描述  : 用户态下netlink接收接口
 输入参数  : void *pvData     ---接收数据缓冲区 
             INT32 iDataLen   ---接收长度，单位是字节，必须大于0且小于等于2048
             UINT32 iWaitTime ---接收等待时间，如果为0则一直等待，如果为非0整数
                                  值则表示等待的时间，单位是秒
 输出参数  : 
 返 回 值  : 实际接收的数据长度，接收失败则返回-1
 调用函数  : 
 被调函数  : 

*****************************************************************************/
INT32 util_netlink_recv(void *pvData, INT32 iDataLen, UINT32 iWaitTime);


/*****************************************************************************
 函 数 名  : ap_netlink_send
 功能描述  : 用户态下netlink发送接口
 输入参数  : void *pvData   ---发送数据缓冲区   
             INT32 iDataLen ---发送长度 
 输出参数  : 无
 返 回 值  : 实际发送的数据长度，发送失败则返回-1
 调用函数  : 
 被调函数  : 
 
*****************************************************************************/
INT32 util_netlink_send(void *pvData, INT32 iDataLen);

/*****************************************************************************
 函 数 名  : util_netlink_recvfrom
 功能描述  : 单纯的接收来自netlink的消息
 输入参数  : void *pvData, INT32 iDataLen
 输出参数  : 无
 返 回 值  : pj_status_t
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2013年4月26日
    作    者   : zhangjiasi
    修改内容   : 新生成函数

*****************************************************************************/
INT32  util_netlink_recvfrom(int sock, void * pvData, INT32 iDataLen, INT32 iWaitTime);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __AP_NETLINK_H__ */
