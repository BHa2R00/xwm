#ifndef _KEYMAP_H
#define _KEYMAP_H

#define KEY_NEXT	XK_Tab
#define KEY_NEW		XK_space
#define KEY_TOPLEFT	XK_q
#define KEY_TOPRIGHT	XK_w
#define KEY_BOTTOMLEFT	XK_a
#define KEY_BOTTOMRIGHT	XK_s
#define KEY_LEFT	XK_h
#define KEY_RIGHT	XK_l
#define KEY_DOWN	XK_j
#define KEY_UP		XK_k
#define KEY_LOWER	XK_z
#define KEY_ALTLOWER	XK_KP_Insert
#define KEY_INFO	XK_i
#define KEY_MAXVERT	XK_equal
#define KEY_MAXFIT	XK_m
#define KEY_MAX		XK_x
#ifdef VWM
# define KEY_FIX		XK_f
# define KEY_PREVDESK	XK_e
# define KEY_NEXTDESK	XK_d
#endif
/* Mixtures of Ctrl, Alt an Escape are used for things like VMWare and
 * XFree86/Cygwin, so the KILL key is an option in the Makefile  */
#ifndef KEY_KILL
//#define KEY_KILL	XK_Escape
#define KEY_KILL	XK_c
#endif

#endif
