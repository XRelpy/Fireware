#include "WM_Config.h"




void WM_Init(void)
{
	//Init LCD
	Lcd_Configuration();
	ili9320_Initializtion();
	//Init Touch
	Touch_Initializtion();
	WM_Clear(0xF0F0);
}
