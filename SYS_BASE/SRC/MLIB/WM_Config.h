#ifndef __WM_CONFIG_H
#define __WM_CONFIG_H

typedef void (*show)(void);
typedef void (*control)(int index);
#define WM_X 320
#define WM_Y 240


//set the Graphic Interface
#include "ili9320.h"


//Redefine the Graphic Interface
#define WM_Line GUI_Line
#define WM_Circle GUI_Circle
#define WM_Rectangle GUI_Rectangle
#define WM_Square GUI_Square
#define WM_Clear ili9320_Clear

struct point
{
	u16 x;
	u16 y;
};


struct WM_MENU
{
		show disp;
		control con;
};

extern void WM_Init(void);		//for LCD Init
extern void WM_Text(u16 x, u16 y, u8 *str, u16 len,u16 Color, u16 bkColor);
extern void WM_Line(u16 x0, u16 y0, u16 x1, u16 y1,u16 color);  // 画线
extern void WM_Circle(u16 cx,u16 cy,u16 r,u16 color,u8 fill);  // 画圆
extern void WM_Rectangle(u16 x0, u16 y0, u16 x1, u16 y1,u16 color,u8 fill); // 画矩形
extern void WM_Square(u16 x0, u16 y0, u16 with, u16 color,u8 fill);  // 画正方形

#endif
