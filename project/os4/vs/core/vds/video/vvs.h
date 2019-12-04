/***************************************************************
 * copyright (c) 2009, gaocheng
 * all rights reserved.
 *
 * file name   : vvs.h
 * version     : 1.0
 * description : virtual vedio system
 * author      : gaocheng
 * date        : 2009-04-22
 ***************************************************************/

#ifndef __VVS_H__
#define __VVS_H__

/***************************************************************
 include header file
 ***************************************************************/
#include <core.h>

#pragma pack(4)

/***************************************************************
 macro define
 ***************************************************************/

/***************************************************************
 enum define
 ***************************************************************/

/***************************************************************
 struct define
 ***************************************************************/

/***************************************************************
 extern function
 ***************************************************************/
enum vga_color vesa_32bpp_read_pix(screen_csys *p);
enum vga_color vesa_16bpp_read_pix(screen_csys *p);

#pragma pack()

#endif
