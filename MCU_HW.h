#ifndef MCU_HW_H
#define MCU_HW_H
//*****************************************************************************
//
// INCLUDES
//
//*****************************************************************************
#include "stdint.h"

//*****************************************************************************
//
// System Control registers (SYSCTL)
//
//*****************************************************************************
#define SYSCTL_RCGCGPIO_R       (((volatile uint32_t *)0x400FE608))
#define SYSCTL_PRGPIO_REG         (((volatile uint32_t *)0x400FEA08))

//*****************************************************************************
//
// GPIO registers 
//
//*****************************************************************************
/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

#define PORT_DR2_REG_OFFSET               0x500
#define PORT_DR4_REG_OFFSET               0x504
#define PORT_DR8_REG_OFFSET               0x508

#define PORT_OPEN_DRAIN_OFFSET       			0x50C
#endif /*MCU_HW.H*/
