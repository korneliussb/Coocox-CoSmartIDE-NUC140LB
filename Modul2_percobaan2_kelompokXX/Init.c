/*************************************************************
 * @file      : Init.c
 * @brief     : Peripheral Init Functions
 * @version   : 1.2.3
 * @date      : 03/30/2019  08:09 
 * @author    : Created by CoSmart 1.2.3
**************************************************************/
#include "DrvGPIO.h"

/*************************************************************
 * GPIOE Initialization
**************************************************************/
void GPIOE_Init()
{
   //
   // Set PE0 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 0, E_IO_OUTPUT);
   //
   // Set PE1 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 1, E_IO_OUTPUT);
   //
   // Set PE2 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 2, E_IO_OUTPUT);
   //
   // Set PE3 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 3, E_IO_OUTPUT);
   //
   // Set PE4 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 4, E_IO_OUTPUT);
   //
   // Set PE5 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 5, E_IO_OUTPUT);
   //
   // Set PE6 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 6, E_IO_OUTPUT);
   //
   // Set PE7 Pin Mode
   //
   DrvGPIO_Open(E_GPE, 7, E_IO_OUTPUT);

}

/*************************************************************
 * GPIOA Initialization
**************************************************************/
void GPIOA_Init()
{
   //
   // Set PA0 Pin Mode
   //
   DrvGPIO_Open(E_GPA, 0, E_IO_INPUT);
   //
   // Set PA1 Pin Mode
   //
   DrvGPIO_Open(E_GPA, 1, E_IO_INPUT);
   //
   // Set PA2 Pin Mode
   //
   DrvGPIO_Open(E_GPA, 2, E_IO_INPUT);
   //
   // Set PA3 Pin Mode
   //
   DrvGPIO_Open(E_GPA, 3, E_IO_INPUT);
   //
   // Set PA4 Pin Mode
   //
   DrvGPIO_Open(E_GPA, 4, E_IO_INPUT);
   //
   // Set PA5 Pin Mode
   //
   DrvGPIO_Open(E_GPA, 5, E_IO_INPUT);

}

/*************************************************************
 * GPIOC Initialization
**************************************************************/
void GPIOC_Init()
{
   //
   // Set PC4 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 4, E_IO_OUTPUT);
   //
   // Set PC5 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 5, E_IO_OUTPUT);
   //
   // Set PC6 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 6, E_IO_OUTPUT);
   //
   // Set PC7 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 7, E_IO_OUTPUT);
   //
   // Set PC12 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 12, E_IO_OUTPUT);
   //
   // Set PC13 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 13, E_IO_OUTPUT);
   //
   // Set PC14 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 14, E_IO_OUTPUT);
   //
   // Set PC15 Pin Mode
   //
   DrvGPIO_Open(E_GPC, 15, E_IO_OUTPUT);

}

void Init()
{
    GPIOE_Init();
    GPIOA_Init();
    GPIOC_Init();
}
