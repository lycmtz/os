/***************************************************************
 * copyright (c) 2009, gaocheng
 * all rights reserved.
 *
 * file name   : window.h
 * version     : 1.0
 * description :
 * author      : gaocheng
 * date        : 2009-04-22
 ***************************************************************/

#ifndef __WINDOW_H__
#define __WINDOW_H__

/***************************************************************
 include header file
 ***************************************************************/

#pragma pack(4)

/***************************************************************
 macro define
 ***************************************************************/
/* 窗口资源数量 */
#define MAX_WINDOW_NUM 0x100

/* 无效的窗口id, 广播消息使用 */
#define INVALID_WINDOW_ID 0

/* 边框的像素宽度 */
#define WND_FRAME_SIZE 3

/* 标题栏高度 */
#define TITLE_HIGH (FONT_SIZE + FONT_SIZE)

/***************************************************************
 enum define
 ***************************************************************/

/***************************************************************
 struct define
 ***************************************************************/
#if 0
/***************************************************************
 * description : 消息头
 ***************************************************************/
struct message {
    /* hwnd hwnd; 发送给的对应窗口句柄 */
    os_u32 task_id;
    /* uint message; 消息的类型 */
    os_u32 message;
    /* wparam wparam; 消息传送第一个32位参数 */
    os_u32 wparam;
    /* lparam lparam; 消息传送第二个32位参数 */
    os_u32 lparam;
    /* dword time; 发送消息的时间 */
    os_u32 time;
    /* point pt; 发送消息时鼠标所在的位置 */
    os_u32 pt;
};
#endif

/***************************************************************
 extern function
 ***************************************************************/

#pragma pack()

#endif /* end of header */

