/*
 * LED_program.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */
#include "STD_TYPES.h"

#include "BIT_MATH.h"

#include"LED_interface.h"


/*Description: LED on/off
 * Input     : Copy_u8PIN_No (PIN Number) ,*Copy_u8Value (Pointer to send value to it)
 * Output    : Return Error Status (Error or NO Error)
 * */
uint8_t LED_Value(uint8_t Copy_u8PINNo,uint8_t Copy_u8Value)
{
	uint8_t LocalError = NO_ERROR;

	if(Copy_u8PINNo < MINIMUM_PIN_NO|| Copy_u8PINNo >MAX_PIN_NO)
	{
		LocalError = ERROR;   //ERROR
	}
	else
	{
		DIO_u8SetPinValue(Copy_u8PINNo,Copy_u8Value);
	}
	return LocalError;
}
