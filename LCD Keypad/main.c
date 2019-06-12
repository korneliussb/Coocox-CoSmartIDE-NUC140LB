//
//#include "DrvSYS.h"
//#include "DrvGPIO.h"
//#include "LCD_Driver.h"
//#include "Scankey.h"
//
//int abc, tegangan;
//
////void delay_loop(void)
////{
////	uint32_t i,j;
////	for(i=0; i<3; i++)
////	{
////		for(j=0; j<60000; j++);
////	}
////}
//
//int main (void)
//{
//	unsigned char temp;
////	UNLOCKREG();
////	DrvSYS_SetOscCtrl(E_SYS_XTL12M, 1);
////	DrvSYS_Delay(5000);
////	DrvSYS_SelectHCLKSource(0);
////	LOCKREG();
////	DrvSYS_SetClockDivider(E_SYS_HCLK_DIV, 0);
//	DrvGPIO_ClrBit(E_GPD, 14);
//	Initial_pannel();
//	clr_all_pannal();
//	print_lcd(0, "Coba keypad");
//	print_lcd(1, "Kelompok XX");
//	print_lcd(2, "Praktikum TM");
//
//	OpenKeyPad();
//	while(1)
//	{
//		tegangan=((float)abc/4096)*5000;
//		temp=Scankey();
//		if (temp==1)
//		{
//			clr_all_pannal();
//			print_lcd(0, "Tombol 1");
//			delay();
//		}
//		else if (temp==2)
//		{
//			clr_all_pannal();
//			print_lcd(0, "Tombol 2");
//			delay();
//		}
//		else if (temp==3)
//		{
//			clr_all_pannal();
//			print_lcd(0, "Tombol 3");
//			delay();
//		}
//
//	}
//}

//KABEH

#include "DrvSYS.h"
#include "DrvGPIO.h"
#include "LCD_Driver.h"
#include "Scankey.h"

int abc, tegangan;

void delay_loop(void)
{
	uint32_t i,j;
	for(i=0;i<5;i++)
		{
			for(j=0;j<60000;j++);
		}
}

int main (void)
{
	unsigned char temp;
//	UNLOCKREG();
//	DrvSYS_SetOscCtrl(E_SYS_XTL12M, 1);
//	DrvSYS_Delay(5000);
//	DrvSYS_SelectHCLKSource(0);
//	LOCKREG();
//	DrvSYS_SetClockDivider(E_SYS_HCLK_DIV, 0);
	DrvGPIO_ClrBit(E_GPD, 14);
	Initial_pannel();
	clr_all_pannal();
	print_lcd(0, "Keypad+7Segment");
	print_lcd(1, "Kelompok XX");
	print_lcd(2, "Praktikum TM");


	int j=0;
	int8_t Angka;
	UNLOCKREG();
	DrvSYS_Open(50000000);
	LOCKREG();


	OpenKeyPad();
	while(1)
	{
		tegangan=((float)abc/4096)*5000;
		temp=Scankey();
		if (temp==1)
		{
			clr_all_pannal();
			print_lcd(0, "Animasi baris 1");
			delay();
		}
		else if (temp==2)
		{
			Angka = ScanKey();
			    	{  for(j=3;j>=0;j--)
			    	     {
						  close_seven_segment();
						  show_seven_segment(j,Angka);
						  delay_loop();
			    	     }
			    	}
			clr_all_pannal();
			print_lcd(0, "Tombol 2");
			delay();
		}
		else if (temp==3)
		{
			clr_all_pannal();
			print_lcd(0, "Tombol 3");
			delay();
		}

	}
}
