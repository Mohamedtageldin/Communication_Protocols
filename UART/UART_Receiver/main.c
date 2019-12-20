/*
 * main.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */

/*________________________________________________________________*/
/******************************************************************/
/*                        INCLUDES                                */
/******************************************************************/
#include "STD_TYPES.h"

#include "BIT_MATH.h"

#include "LED_interface.h"

#include "SleepModes.h"

#include "AVR_UART_REG.h"

#include "UART.h"

#include "avr/delay.h"

void led(void);


uint8_t x=0;
/*________________________________________________________________*/
/******************************************************************/
/*                        MAIN                                    */
/******************************************************************/
int main(void)
{

	/*______________PIN Initialization_____________________________*/

	DIO_u8Init_PIN(DIO_PIN_NO_12,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_13,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_14,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_15,DIO_OUTPUT);
	/*__________PIN INITIAL VALUES__________________________________*/
	LED_Value(DIO_PIN_NO_12,LED_OFF);
	LED_Value(DIO_PIN_NO_13,LED_OFF);
	LED_Value(DIO_PIN_NO_14,LED_OFF);
	LED_Value(DIO_PIN_NO_15,LED_OFF);



	str_UartConfg_t ob1;

	ob1.u32_BaudRate = 2400;
	ob1.u8_DataBits = UART_8_BIT_MODE;
	ob1.u8_FlagAction = UART_INTERRUPT;

UART_init(&ob1);




//UART_sendByte(3);


	while(1)
	{
		UART_recieveByte(&x);

		if(x == 1)
		{
			DIO_u8SetPinValue(12,1);
			DIO_u8SetPinValue(13,0);
			DIO_u8SetPinValue(14,0);

		}
		else if(x==2)
		{
			DIO_u8SetPinValue(12,0);
			DIO_u8SetPinValue(13,1);
			DIO_u8SetPinValue(14,0);

		}
		else if(x==3)
		{
			DIO_u8SetPinValue(12,0);
			DIO_u8SetPinValue(13,0);
			DIO_u8SetPinValue(14,1);

		}


	}

	return 0;
}




