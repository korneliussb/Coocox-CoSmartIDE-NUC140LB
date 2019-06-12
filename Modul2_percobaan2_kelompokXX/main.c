#include "DrvGPIO.h"
#include "DrvSYS.h"
#include "Seven_Segment.h"
#include "ScanKey.h"

void delay_loop(void)
{
	uint32_t i,j;
	for(i=0;i<5;i++)
		{
			for(j=0;j<60000;j++);
		}
}

int main(void)
{
	int j=0;
	int8_t Angka;
	UNLOCKREG();
	DrvSYS_Open(50000000);
	LOCKREG();
	OpenKeyPad();
    while(1)
    {
    	Angka = Scankey();
    	{  for(j=3;j>=0;j--)
    	     {
			  close_seven_segment();
			  show_seven_segment(j,Angka);
			  delay_loop();
    	     }
    }
}
}
