#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
//*****************************************************************************
//
// INCLUDES
//
//*****************************************************************************
#include "stdint.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"


//*****************************************************************************
//
// PORT DRIVER PROTOTYPES
//
//*****************************************************************************

void Port_Init(const Port_ConfigType* ConfigPtr);
void DIO_WritePort(DIO_PortType Port_ID,DIO_PortLevelType Level);
DIO_PortLevelType DIO_ReadPort(DIO_PortType Port_ID);

//*****************************************************************************
//
// DIO DRIVER PROTOTYPES
//
//*****************************************************************************
DIO_LevelType DIO_ReadChannel(DIO_ChannelType Channel_ID);
void DIO_WriteChannel(DIO_ChannelType Channel_ID,DIO_LevelType Level);
DIO_LevelType DIO_FlipChannel(DIO_ChannelType Channel_ID);

#endif /* GPIO_INTERFACE_H */
