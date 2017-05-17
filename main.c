//--------------------------------------------------------------
// File     : main.c
// Datum    : 30.03.2016
// Version  : 1.0
// Autor    : UB
// mods by	: J.F. van der Bent
// CPU      : STM32F4
// IDE      : CooCox CoIDE 1.7.x
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------

#include "main.h"
#include "stm32_ub_vga_screen.h"
#include <math.h>
#include "Draw_request.h"



int main()
{
	SystemInit(); // System speed to 168MHz
	UB_VGA_Screen_Init(); // Init VGA-Screen

//	UB_VGA_FillScreen(VGA_COL_BLACK);
//	UB_VGA_SetPixel(10,10,10);

  while(1)
  {
	  Bitmap_to_VGA();

//	  Draw_Ellipse(160, 120, 100, 10, 1, 1, VGA_COL_RED);
  }
}

