#include "DrvGPIO.h"
#include "DrvSYS.h"
#include "LCD_Driver.h"

void Init();

int abc;
int tegangan;

int tombol(void)
{
	while(DrvGPIO_GetBit(E_GPB,15)==0)
		{
	    DrvGPIO_ClrBit(E_GPB,11);
	    }
	    DrvGPIO_SetBit(E_GPB,11);
}

int main(void)
{

    Init();
    Initial_pannel();
    clr_all_pannal();

    DrvGPIO_ClrBit(E_GPD,14);

    while(1)
    {
    	tegangan=((float)abc/4096)*5000;
    	print_lcd(0,"Kelompok XX");
    	print_lcd(1,"Praktikum TM");
       	print_lcd(2,"Sistem Komputer");
   	   	print_lcd(3,"Univ. Diponegoro");
    	tombol();
    }
}


