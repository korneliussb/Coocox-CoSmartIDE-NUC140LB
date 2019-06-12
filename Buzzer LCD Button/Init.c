/*************************************************************
 * @file      : Init.c
 * @brief     : Peripheral Init Functions
 * @version   : 1.2.3
 * @date      : 03/25/2019  09:48 
 * @author    : Created by CoSmart 1.2.3
**************************************************************/
#include "DrvGPIO.h"
#include "DrvSPI.h"

/*************************************************************
 * GPIOA Initialization
**************************************************************/
void GPIOA_Init()
{
   //
   // Set PB11 Pin Mode
   //
   DrvGPIO_Open(E_GPB, 11, E_IO_OUTPUT);
   //
   // Set PB15 Pin Mode
   //
   DrvGPIO_Open(E_GPB, 15, E_IO_OUTPUT);

}

/*************************************************************
 * GPIOD Initialization
**************************************************************/
void GPIOD_Init()
{
   //
   // Set PD14 Pin Mode
   //
   DrvGPIO_Open(E_GPD, 14, E_IO_OUTPUT);

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

/* SPI CallBack function declaration */
void SPI3_Callback(uint32_t u32UserData);

/*************************************************************
 * SPI Initialization Code Template
**************************************************************/
void SPI3_Init()
{
    E_DRVSPI_PORT eSpiPort;

    /* Get which port to be used */
    eSpiPort = eDRVSPI_PORT3;
    DrvGPIO_InitFunction(E_FUNC_SPI2);

    /* Slave mode; clock parity, transmit and receive edge(eType) */
    DrvSPI_Open(eSpiPort, eDRVSPI_SLAVE, eDRVSPI_TYPE0, 32);

    /* Slave Select Trigger Mode */
    DrvSPI_SetTriggerMode(eSpiPort, eDRVSPI_EDGE_TRIGGER);

    /* Slave Selcet Active Level */
    DrvSPI_SetSlaveSelectActiveLevel(eSpiPort, eDRVSPI_ACTIVE_LOW_FALLING);

    /* LSB or MSB */
    DrvSPI_SetEndian(eSpiPort, eDRVSPI_MSB_FIRST);
}

void Init()
{
    GPIOA_Init();
    GPIOD_Init();
    GPIOC_Init();
    SPI3_Init();
}
