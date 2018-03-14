/******************************************************************************

                  版权所有 (C), 2010-2012, 上海寰创通信科技有限公司

 ******************************************************************************
  文 件 名   : pal_mutex.c
  版 本 号   : 初稿
  作    者   : 张平
  生成日期   : 2012年9月4日 星期二
  最近修改   :
  功能描述   : 进程间互斥锁操作
  函数列表   :
  修改历史   :
  1.日    期   : 2012年9月4日 星期二
    作    者   : 张平
    修改内容   : 创建文件

******************************************************************************/

/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/
#include <stdio.h>  
#include <stdlib.h>
#include <sys/sem.h>

#include "lte.h"
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
static int g_iSemId;            
static struct sembuf g_stSem;   
                    
/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/
/* 使用两个信号量，0号信号量是实际加锁和解锁使
   用到的信号量，1号信号量是作为初始化0号信号
   量的标记，防止各个进程多次对0号信号量初始化 */

#define SEM_VAL_NUM         0   /* 实际信号量序号 */
#define SEM_VAL_FLAG_NUM    1   /* 初始化标记信号量序号 */

#define SEM_KEY_FILE        "/ipc/mutex/pal"


/*****************************************************************************
 函 数 名  : lte_set_semvalue
 功能描述  : 设置信号集中信号量的值
 输入参数  : int iSemNum  --信号量在信号集中的序号
             int iVal     --设置值
 输出参数  : 无
 返 回 值  : 
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2012年9月4日 星期二
    作    者   : 张平
    修改内容   : 新生成函数

*****************************************************************************/
LTE_RET_E lte_set_semvalue(int iSemNum,int iVal)
{
    if(-1 == semctl(g_iSemId,iSemNum,SETVAL,iVal))
    {
        return LTE_FAIL;
    }
    return LTE_OK;
}

/*****************************************************************************
 函 数 名  : lte_get_semvalue
 功能描述  : 获取信号集中信号量的值
 输入参数  : int iSemNum  --信号量在信号集中的序号
 输出参数  : 无
 返 回 值  : 
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2012年9月4日 星期二
    作    者   : 张平
    修改内容   : 新生成函数

*****************************************************************************/
int lte_get_semvalue(int iSemNum)
{
    return semctl(g_iSemId,iSemNum,GETVAL);
}

/*****************************************************************************
 函 数 名  : lte_mutex_lock
 功能描述  : 进程互斥锁加锁即对信号量-1操作
 输入参数  : void  
 输出参数  : 无
 返 回 值  : 
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2012年9月4日 星期二
    作    者   : 张平
    修改内容   : 新生成函数

*****************************************************************************/
LTE_RET_E lte_mutex_lock(void)
{
    
    g_stSem.sem_op = -1;
    
    if(semop(g_iSemId,&g_stSem,1) < 0)
    {
        return LTE_FAIL;
    }
    return LTE_OK;
}

/*****************************************************************************
 函 数 名  : lte_mutex_unlock
 功能描述  : 进程互斥锁解锁即对信号量+1操作
 输入参数  : void  
 输出参数  : 无
 返 回 值  : 
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2012年9月4日 星期二
    作    者   : 张平
    修改内容   : 新生成函数

*****************************************************************************/
LTE_RET_E lte_mutex_unlock(void)
{
   
    g_stSem.sem_op = 1;
    
    if(semop(g_iSemId,&g_stSem,1) < 0)
    {
        return LTE_FAIL;
    }
    return LTE_OK;
}

/*****************************************************************************
 函 数 名  : lte_mutex_init
 功能描述  : 进程互斥锁初始化
 输入参数  : void  
 输出参数  : 无
 返 回 值  : 
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2012年9月4日 星期二
    作    者   : 张平
    修改内容   : 新生成函数

*****************************************************************************/
LTE_RET_E lte_mutex_init(void)
{
    key_t iKey; 

    iKey = ftok(SEM_KEY_FILE,'f');
    g_iSemId =semget(iKey,2,IPC_CREAT|0770);
    if(g_iSemId < 0)
    {
        return LTE_FAIL;
    }
    
    /* 初始化信号量的值为1 */
    if(1 != lte_get_semvalue(SEM_VAL_FLAG_NUM))
    {
        lte_set_semvalue(SEM_VAL_NUM,1);
        lte_set_semvalue(SEM_VAL_FLAG_NUM,1);
    }

    g_stSem.sem_num = SEM_VAL_NUM; 
    /* SEM_UNDO标志表示在进程退出时自动释放信号量 */   
    g_stSem.sem_flg = SEM_UNDO;
    return LTE_OK; 
}