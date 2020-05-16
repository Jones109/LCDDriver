/*
 * LCD_Driver.c
 *
 * Created: 06-02-2020 09:13:43
 * Author : Bruger
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "LCDDriver/lcd162.h"


int main(void)
{
	LCDInit();
	
	
	LCDDispInteger(9);
    /* Replace with your application code */
    while (1) 
    {
    }
}

