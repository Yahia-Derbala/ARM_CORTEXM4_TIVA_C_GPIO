#include "stdint.h"
#include "GPIO_Interface.h"
int main(void)
{
	Port_ConfigType Pins[2];
	/* Pin 1 Config */
	Pins[0].PinNum=PF4;
	Pins[0].PinMode=PIN_GPIO;
	Pins[0].PinDir=INPUT;
	Pins[0].PinAttachType=PULLUP;
	Pins[0].PinLevelValue=HIGH;
	/* Pin 2 Config */
	Pins[1].PinNum=PF2;
	Pins[1].PinMode=PIN_GPIO;
	Pins[1].PinDir=OUTPUT;
	Pins[1].PinLevelValue=LOW;
	Port_Init(Pins);
	while(1)
	{
	 if(!DIO_ReadChannel(PF4))
	 {
		 DIO_WriteChannel(PF2,HIGH);
	 }else if (DIO_ReadChannel(PF4))
	 {
		 DIO_WriteChannel(PF2,LOW);
	 }
	}
}
