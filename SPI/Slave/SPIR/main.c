/*
 * SPI.c
 *
 * Created: 12/20/2019 1:25:44 PM
 * Author : Mohamedtageldien
 */ 

#include "Compiler.h"
#include "SPI.h"
#include "MCAL_DIO_interface.h"


int main(void)
{
    /* Replace with your application code */
	DIO_u8Init_PORT(DIO_PORT_3,0xFF);
	Str_SpiCfg_t Str_cfg;
	Str_cfg.Prescaller = (uint8_t)PSC_64;
	Str_cfg.Speed_Mode = (uint8_t)SINGLE_SPEED;
	Str_cfg.Interrupt_Mode=POLLING;
	Str_cfg.Master_Mode=SLAVE;
	Str_cfg.Order=LEASTFIRST;
    SPI_Init(&Str_cfg);
	uint8_t Data= 5;
	while(1){
	SPI_Receivebyte(&Data);
	DIO_u8SetPortValue(DIO_PORT_3,Data);
	}
	return 0;
}

