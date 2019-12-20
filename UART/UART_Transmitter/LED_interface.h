/*
 * LED_interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: mosta
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "AVR_MCAL_DIO_REG.h"

#include "MCAL_DIO_config.h"

#include"MCAL_DIO_interface.h"


#define LED_ON 1
#define LED_OFF 0

/*Description: LED on/off
 * Input     : Copy_u8PIN_No (PIN Number) ,*Copy_u8Value (Pointer to send value to it)
 * Output    : Return Error Status (Error or NO Error)
 * */
extern uint8_t LED_Value(uint8_t Copy_u8PINNo,uint8_t Copy_u8Value);

#endif /* LED_INTERFACE_H_ */
