/*
 * SPI.c
 *
 * Created: 12/20/2019 1:25:44 PM
 * Author : Mohamedtageldien
 */ 

#define F_CPU 8000000UL

#include "Compiler.h"
#include "SPI.h"

#define DATA_CHARACTER 10

int main(void)
{
    /* Replace with your application code */
	Str_SpiCfg_t Str_cfg;
	Str_cfg.Prescaller = (uint8_t)PSC_64;
	Str_cfg.Speed_Mode = (uint8_t)SINGLE_SPEED;
	Str_cfg.Interrupt_Mode=POLLING;
	Str_cfg.Master_Mode=MASTER;
	Str_cfg.Order=LEASTFIRST;
    	SPI_Init(&Str_cfg);
	uint8_t Data= DATA_CHARACTER;
	while (1)
	{
		SPI_Sendbyte(Data);
		Data++;
	}
	
	return 0;
}

