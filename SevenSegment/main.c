#include "DrvGPIO.h"
#include "DrvSYS.h"
#include "Seven_Segment.h"

void Init();

void delay(void)
{
	uint32_t i;
	for( i=0; i<100; i++ );
}

void Test(void)
{
	uint32_t i,j;
	for( i=4; i>0; i-- )
	{
		for ( j=0; j<300; j++ )
			close_seven_segment();
			show_seven_segment(3,2); //7segment dan angka yg ditampilkan
			delay();
			close_seven_segment();
			show_seven_segment(2,0);
			delay();
	}
}

int main(void)
{

    Init();
    while(1)
    {
    	Test();
    }
}
