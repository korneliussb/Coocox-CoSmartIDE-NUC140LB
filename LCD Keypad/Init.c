/*************************************************************
 * @file      : Init.c
 * @brief     : Peripheral Init Functions
 * @version   : 1.2.3
 * @date      : 03/25/2019  10:26 
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
 * GPIOD Initialization
**************************************************************/
void GPIOD_Init()
{
   //
   // Set PD14 Pin Mode
   //
   DrvGPIO_Open(E_GPD, 14, E_IO_OUTPUT);

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
    SPI3_Init();
}
