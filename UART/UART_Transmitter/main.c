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


uint8_t x=0;
/*________________________________________________________________*/
/******************************************************************/
/*                        MAIN                                    */
/******************************************************************/
int main(void)
{
	uint8_t Local_uint8_Value,Local_loop = 1;

	/*______________PIN Initialization_____________________________*/

	DIO_u8Init_PIN(DIO_PIN_NO_12,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_13,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_14,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_15,DIO_OUTPUT);
	DIO_u8Init_PIN(DIO_PIN_NO_20,DIO_INPUT);

	DIO_u8SetPinInputType(DIO_PIN_NO_20,DIO_HIGH);
	/*__________PIN INITIAL VALUES__________________________________*/
	LED_Value(DIO_PIN_NO_12,LED_OFF);
	LED_Value(DIO_PIN_NO_13,LED_OFF);
	LED_Value(DIO_PIN_NO_14,LED_OFF);
	LED_Value(DIO_PIN_NO_15,LED_OFF);



	str_UartConfg_t ob1;

	ob1.u32_BaudRate = 2400;              /*Baud Rate*/
	ob1.u8_DataBits = UART_8_BIT_MODE;    /*No of bits*/
	ob1.u8_FlagAction = UART_INTERRUPT;  /*Flag Action*/

	UART_init(&ob1);  /*Initialize Uart*/

	while(1)
	{
		DIO_u8GetPinValue(20,&Local_uint8_Value);

		if(Local_uint8_Value == DIO_LOW)
		{
			while(Local_uint8_Value != DIO_HIGH)
			{
				DIO_u8GetPinValue(20,&Local_uint8_Value);
			}
			UART_sendByte(Local_loop);
			Local_loop ++;

		}

		if(Local_loop == 4)
		{
			Local_loop = 1;
		}

	}

	return 0;
}




