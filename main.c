/*
 * GPIO.c
 *
 * Created: 2024-11-21 오후 3:35:43
 * Author : iot
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRD = 0xff;  //출력모드 전기신호를 주고 출력으로 설정해줘야함
	
	
    while (1) 
    {
		PORTD=0b10101010;   //0xAA
		_delay_ms(4000);
		
		PORTD=0b01010101;  //0x55
		_delay_ms(4000);
	    
    }
}

