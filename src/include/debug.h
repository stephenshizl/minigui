///////////////////////////////////////////////////////////////////////////////
//
//                          IMPORTANT NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
 *   This file is part of MiniGUI, a mature cross-platform windowing
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 *
 *   Copyright (C) 2002~2020, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Or,
 *
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 *
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 *
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/blog/minigui-licensing-policy/>.
 */
/*
** debug.h: Some common debug helpers.
**
** Create date: 2020/02/12
*/

#ifndef GUI_DEBUG_H
    #define GUI_DEBUG_H

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

static inline void dump_region (const CLIPRGN* rgn, const char* name)
{
    _WRN_PRINTF("rcBound of %s (%p): (%d, %d, %d, %d); size (%d x %d)\n",
            name, rgn,
            rgn->rcBound.left, rgn->rcBound.top,
            rgn->rcBound.right, rgn->rcBound.bottom,
            RECTW(rgn->rcBound), RECTH(rgn->rcBound));
}

static inline void dump_rect (const RECT* rect, const char* name)
{
    _WRN_PRINTF("rect of %s: (%d, %d, %d, %d); size (%d x %d)\n", name,
            rect->left, rect->top, rect->right, rect->bottom,
            RECTWP(rect), RECTHP(rect));
}

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* GUI_DEBUG_H */

