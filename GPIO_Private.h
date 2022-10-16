#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H
//*****************************************************************************
//
// INCLUDES
//
//*****************************************************************************
#include "stdint.h"

//*****************************************************************************
//
// MACROS
//
//*****************************************************************************
#define GPIO_Ports_Pin_Number 				43

#define LOCK_KEY_MASK 								0x4C4F434B
#define CTRL_REG_CLEAR_MASK 					0x0000000F
/* Port HIGH and LOW masks */
#define PORT_A_B_D_HIGH_MASK 					0xFF
#define PORTC_HIGH_MASK 							0xF0
#define PORTE_HIGH_MASK 							0x3F
#define PORTF_HIGH_MASK 							0x1F

#define PORT_A_B_D_LOW_MASK 					0x00
#define PORTC_LOW_MASK 								0x0F
#define PORTE_LOW_MASK 								0xC0
#define PORTF_LOW_MASK 								0xE0
//*****************************************************************************
//
// DATATYPES
//
//*****************************************************************************
typedef uint8_t DIO_PortLevelType;
typedef uint8_t DIO_LevelType;

typedef enum  
{
	PA0=00,PA1,PA2,PA3,PA4,PA5,PA6,PA7,
	PB0=10,PB1,PB2,PB3,PB4,PB5,PB6,PB7,
	PC0=20,PC1,PC2,PC3,PC4,PC5,PC6,PC7,
	PD0=30,PD1,PD2,PD3,PD4,PD5,PD6,PD7,
	PE0=40,PE1,PE2,PE3,PE4,PE5,
  PF0=50,PF1,PF2,PF3,PF4
}Port_PinType, DIO_ChannelType;

typedef enum 
{
	INPUT,
	OUTPUT
}Port_PinDirType;

typedef enum 
{
	GPIO_Port_A,
	GPIO_Port_B,
	GPIO_Port_C,
	GPIO_Port_D,
	GPIO_Port_E,
	GPIO_Port_F
}DIO_PortType;


typedef enum 
{
	PULLUP,
	PULLDOWN
}Port_PinInternalAttachType;

typedef enum 
{
	LOW,
	HIGH
}Port_PinLevelValueType;

typedef enum 
{
	Current_2_mA,
	Current_4_mA,
	Current_8_mA
}PinOutputCurrentType;

typedef enum
{
	/*Generic*/
	PIN_GPIO=-1,
	PIN_ANALOG=0,
	
	/*Port A*/
	PA0_U0Rx=1,PA0_CAN1Rx=8,
	PA1_U0Tx=1,PA1_CAN1Tx=8,
	PA2_SSI0Clk=2,
	PA3_SSI0Fss=2,
	PA4_SSI0Rx=2,
	PA5_SSI0Tx=2,
	PA6_I2C1SCL=3,PA6_M1PWM2=5,
	PA7_I2C1SDA=3,PA7_M1PWM3=5,
	
	/*Port B*/
	PB0_USB0ID=0,PB0_U1Rx=1,PA7_T2CCP0=7,
	PB1_USB0VBUS=0,PB0_U1Tx=1,PA7_T2CCP1=7,
	PB2_I2C0SCL=3,PB2_T3CCP0=7,
	PB3_I2C0SDA=3,PB3_T3CCP1=7,
	PB4_AIN10=0,PB4_SSI2Clk=2,PB4_M0PWM2=4,PB4_T1CCP0=7,PB4_CAN0Rx0=8,
	PB5_AIN11=0,PB5_SSI2Fss=2,PB5_M0PWM3=4,PB5_T1CCP1=7,PB5_CAN0Tx0=8,
	PB6_SSI2Rx=2,PB6_M0PWM0=4,PB6_T0CCP0=7,
	PB7_SSI2Tx=2,PB7_M0PWM1=4,PB7_T0CCP1=7,
	
	/*Port C*/
	PC0_TCK_SWCLK=1,PC0_T4CCP0=7,
	PC1_TMS_SWDIO=1,PC1_T4CCP1=7,
	PC2_TDI=1,PC2_T5CCP0=7,
	PC3_TDO_SWO=1,PC3_T5CCP1=7,
	PC4_C1_N=0,PC4_U4Rx=1,PC4_U1Rx=2,PC4_M0PWM6=4,PC4_IDX1=6,PC4_WT0CCP0=7,PC4_U1RTS=8,
	PC5_C1_P=0,PC5_U4Tx=1,PC5_U1Tx=2,PC5_M0PWM7=4,PC5_PhA1=6,PC5_WT0CCP1=7,PC5_U1CTS=8,
	PC6_C0_P=0,PC6_U3Rx=1,PC6_PhB1=6,PC6_WT1CCP0=7,PC6_USB0EPEN=8,
	PC7_C0_N=0,PC7_U3Tx=1,PC7_WT1CCP1=7,PC7_USB0PFLT=8,
	
	/*Port D*/
	PD0_AIN7=0,PD0_SSI3Clk=1,PD0_SSI1Clk=2,PD0_I2C3SCL=3,PD0_M0PWM6=4,PD0_M1PWM0=5,PD0_WT2CCP0=7,
	PD1_AIN6=0,PD1_SSI3Fss=1,PD1_SSI1Fss=2,PD1_I2C3SDA=3,PD1_M0PWM7=4,PD1_M1PWM1=5,PD1_WT2CCP1=7,
	PD2_AIN5=0,PD2_SSI3Rx=1,PD2_SSI1Rx=2,PD2_M0FAULT0=4,PD2_WT3CCP0=7,PD2_USB0EPEN=8,
	PD3_AIN4=0,PD3_SSI3Tx=1,PD3_SSI1Tx=2,PD3_IDX0=6,PD3_WT3CCP1=7,PD3_USB0PFLT=8,
	PD4_USB0DM=0,PD4_U6Rx=1,PD4_WT4CCP0=7,
	PD5_USB0DP=0,PD5_U6Tx=1,PD5_WT4CCP1=7,
	PD6_U2Rx=1,PD6_M0FAULT0=4,PD6_PhA0=6,PD6_WT5CCP0=7,
	PD7_U2Tx=1,PD7_PhB0=6,PD7_WT5CCP1=7,PD7_NMI=8,
	
	/*Port E*/
	PE0_AIN3=0,PE0_U7Rx=1,
	PE1_AIN2=0,PE1_U7Tx=1,
	PE2_AIN1=0,
	PE3_AIN3=0,
	PE4_AIN9=0,PE4_U5Rx=1,PE4_I2C2SCL=3,PE4_M0PWM4=4,PE4_M1PWM2=5,PE4_CAN0Rx=8,
	PE5_AIN8=0,PE5_U5Tx=1,PE5_I2C2SDA=3,PE5_M0PWM5=4,PE5_M1PWM3=5,PE5_CAN0Tx=8,
	
	/*Port F*/
	PF0_U1RTS=1,PF0_SSI1Rx=2,PF0_CAN0Rx=3,PF0_M1PWM4=5,PF0_PhA0=6,PF0_T0CCP0=7,PF0_NMI=8,PF0_C0o=9,
	PF1_U1CTS=1,PF1_SSI1Tx=2,PF1_M1PWM5=5,PF1_PhB0=6,PF1_T0CCP1=7,PF1_C1o=8,PF1_TRD1=14,
	PF2_SSI1Clk=2,PF2_M0FAULT0=4,PF2_M1PWM6=5,PF2_T1CCP0=7,PF2_TRD0=14,
	PF3_SSI1Fss=2,PF3_CAN0Tx=3,PF3_M1PWM7=5,PF3_T1CCP1=7,PF3_TRCLK=14,
	PF4_M1FAULT0=5,PF4_IDX0=6,PF4_T2CCP0=7,PF4_USB0EPEN=8
}Port_PinModeType;

struct Port_ConfigType
{
	Port_PinType PinNum;
	Port_PinDirType PinDir;
	Port_PinModeType PinMode; 
	Port_PinInternalAttachType PinAttachType;
	PinOutputCurrentType PinCurrent;
	Port_PinLevelValueType PinLevelValue;
};
typedef struct Port_ConfigType Port_ConfigType;

#endif /* GPIO_PRIVATE_H */
