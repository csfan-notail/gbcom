/******************************************************************************

  Copyright (C), 2001-2011, GBCOM shanghai Co. Ltd.

 ******************************************************************************
  File Name     : cloud_platform.h
  Version       : Initial Draft
  Author        : Zhou Shouya
  Created       : 2013/12/5
  Last Modified :
  Description   : cloud_platform.c header file
  Function List :
  History       :
  1.Date        : 2013/12/5
    Author      : Zhou Shouya
    Modification: Created file

******************************************************************************/
#ifndef __CLOUD_PLATFORM_H__
#define __CLOUD_PLATFORM_H__

/** ping */
#define CLIENT_NUM  "client_num="
#define CLIENT_LIST "client_list="
#define CONF_VER    "conf_ver="
#define CMD_VER     "cmd_ver="
#define TPL_VER     "res_tpl_version="
#define PROD_VER    "res_product_version="
#define AD_VER      "res_adver_version="
/*add@2014.10.11*/
#define USER_VER	"userversion="
#define TOTAL_USER_NUM "totalusernum="

/** conf */
#define QOSENABLE   "QosEnable "                         /** 流控开关 */
#define QOSUP		"QosUp"								 /** up max band*/
#define QOSDOWN		"QosDown"							 /** down max band*/
#define TRUSTEDMACLIST "TrustedMACList "                 /** MAC 白名单 */
#define TRUSTEDIPLIST "TrustedIPList "                   /** IP 白名单 */
#define TRUSTEDWANHOSTLIST "TrustedWANHOSTList "         /** 认证前 URL 白名单 */
#define POSTTRUSTEDWANHOSTLIST "PostTrustedWANHOSTList " /** 认证后 URL 白名单 */
#define BLACKIPLIST "BlackIPList "                       /** IP 黑名单 */
#define BLACKWANHOSTLIST "BlackWANHOSTList "             /** URL 黑名单 */
#define BLACKMACLIST "BlackMACList "                     /** MAC 黑名单 */
#define FREEAUTHMACLIST "FreeAuthMACList "               /** MAC 免认证 */
#define FREEAUTHIPLIST  "FreeAuthIPList "                /** IP 免认证 */
#define MAXSTATIONNUM "MaxStationNum "                   /** 最大接入用户数 :可配置*/
#define MAXDEVSTATIONNUM "MaxDevStationNum "                   /** 最大接入用户数 :产品定位相关*/
#define FORCETIMEOUT  "ForceCutTime "					 /** 硬性断开时间 */
#define IDLETIMEOUT  "IdleCutTime "					     /** 空闲断开时间 */
#define WANFLOWSTATSWITCH "WanFlowStatSwitch"            /**add@2014.8.26 wan口流量上报开关，默认关闭*/
/* BEGIN: Added by WeiHonggang, 2014/2/18   PN:TASK#0平台支持认证模式同步到网关，并根据认证模式进行设置 */
#define AUTHMODE "auth_mode" /*认证方式*/
#define STADCTENABLE "StadctEnable " /*终端扫描使能*/
#define STADCTRSSI "StadctRSSI " /*终端感知阀值*/
#define STADCTRPTTIME "StadctRptTime " /*扫描上报周期*/
#define MUSTREDIRECTURLLIST "MustRedirectUrlList"  /**add@2014.11.02 必须要重定向url名单*/
/* add@2015.01.28 for wechat connect wifi*/
#define WXLSERVERIP "WXLServerIP"

typedef enum {
	CONFIG_CHANGE_BW_UP = 0,
	CONFIG_CHANGE_BW_DOWN,
	CONFIG_CHANGE_FORCETIMEOUT,
	CONFIG_CHANGE_IDLETIMEOUT,
	MAX_GLOBAL_CONFIG_TO_CLIENT_NUM
}en_global_config_to_client_type;


#define URL_LEN_MAX 64
typedef enum
{
    AUTH_MODE_FREE = 0,
    AUTH_MODE_USER,
    AUTH_MODE_MES,
    AUTH_MODE_QQ,
    AUTH_MODE_WEIBO,
    AUTH_MODE_WEIXIN,
    AUTH_MODE_ALIPAY, /*add@2014.10.11 add auth mode: alipay*/
    AUTH_MODE_WXL,    /*add@2015.01.28 for wechat connect wifi*/
    AUTH_MODE_MAX,
}en_auth_mode;
typedef enum
{
    AUTH_MODE_NOT_SUPPORT = 0,
    AUTH_MODE_SUPPORT,   
}en_auth_mode_support;
typedef struct
{
    unsigned char url[URL_LEN_MAX];
}st_url;
/* END:   Added by WeiHonggang, 2014/2/18   PN:TASK#0平台支持认证模式同步到网关，并根据认证模式进行设置 */

/** client */
#define CLIENT_COUNT "count="
#define CLIENT_BEGIN "begin="

/* portal 下沉定义 */
#define CLOUD_SRC_VER_STORE_FILE      "/tmp/cloud_src_ver"      /* 存储portal下沉下载资源的版本号 */
/* 注意文件路径最后要加斜杠 */
#if (defined(GW_X86) || defined(GW_ARM) || defined(GW_AC))   //by cj
#define LIGHTTPD_ROOT_DOC   "/appfs/web/webpages/"     /* lighttpd存放网页的根目录 */
#else
#define LIGHTTPD_ROOT_DOC   "/tmp/app/home/cloud/webpages/"     /* lighttpd存放网页的根目录 */
#endif

#define TPL_SRC_FILE        "cmps/static/themes/"             /* 模板存放的位置 */
#define PRODUCT_SRC_FILE    "cmps/static/attach/"
#define AD_SRC_FILE         "cmps/static/uploads/"

typedef struct _cloud_src_ver_t{
    int iTpl_ver;       //模板版本号
    int iProduct_ver;   //产品版本
    int iAd_ver;        //公司版本
}cloud_src_ver_t;

/**@ 事件编号 */
typedef enum _en_event_code{
    EVENT_PING, /** ping */
    EVENT_DENY_CLIENT,  /** 无流程或者超时下线 */
    EVENT_REQUEST_CLIENT_LIST, /** 获取终端列表 */
    EVENT_REPORT_CLIENT, /** 终端信息上报 */
    EVENT_REQUEST_CONFIG, /** 请求配置 */
    EVENT_REPORT_AP, /*AP信息上报*/
    EVENT_REPORT_STADCT, /*终端探测信息上报*/
    EVENT_REPORT_WAN_FLOWING, /*add@2014.8.25 增加wan口流量统计上报*/
    EVENT_DOWNLOAD_WXL_WHITELIST, /*微信连白名单下载任务*/
    EVENT_SYNC_AUTHSTA_LIST,
    EVENT_SYNC_STA_KEY,
    EVENT_MAX,
}en_event_code;

typedef struct _event_map {
    int time_interval; /**@ 事件触发间隔时间 */
    int timeout_count; /**@ 超时次数 */
    int count;         /**@ 执行次数, 0表示一直执行 */
    en_event_code event_code;    /**@ 事件编号 */
    //time_t last_time;  /**@ 上次触发事件 */
    long last_time;  /**@ 上次触发事件时间 */
    void (*request_func)(); /**@ 触发事件的函数指针 */
    void (*response_func)();/**@ 处理回复事件函数指针 */
	
    struct _event_map *next;
}event_map;
/*add@2014.8.26 */
typedef struct _interface_flow_stats{
	unsigned long long wan_total_incoming;
	unsigned long long wan_total_outgoing;
	unsigned long long wan_last_report_incoming;
	unsigned long long wan_last_report_outging;
}interface_flow_stats_t;

extern void thread_platform(void);

extern int passive_user_logout(t_client *client);

extern int first_ping(void);
extern void first_client_request(void);
extern int download_src();
extern void read_src_loacl_ver();
extern int auth_mode_support_wxl(void);
extern int auth_mode_support_weixin(void);

extern void get_local_config();

#endif /* __CLOUD_PLATFORM_H__ */
