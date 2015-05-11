/*
 * avr_timeslot_allocator.c
 *
 * Created: 10.05.2015 02:27:48
 *  Author: John Doe
 */ 


#include <avr/io.h>

#define UART_BAUD_RATE	250000

int main(void)
{
	
	DDRB |= (1 << DDD7) | (1 << DDD5);
	
    while(1)
    {
        
    }
}