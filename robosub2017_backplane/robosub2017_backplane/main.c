/*
testing the LEDs
 */ 

#define F_CPU 16000000UL // 16MHz clock from the debug processor
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    //set output pins
	DDRD |= (1<<DDD3); //pin 1 - error LED 1
	DDRD |= (1<<DDD4); //pin 2 - error LED 2
	DDRD |= (1<<DDD5); //pin 9 - error LED 3
	DDRD |= (1<<DDD6); //pin 10 - error LED 4
	
	while(1)
    {
		
		PIND |= (1<<PIND3); //toggle LED
		_delay_ms(500);
		PIND |= (1<<PIND4); //toggle LED
		_delay_ms(500);
		PIND |= (1<<PIND5); //toggle LED
		_delay_ms(500);
		PIND |= (1<<PIND6); //toggle LED
		_delay_ms(500);
    }
}