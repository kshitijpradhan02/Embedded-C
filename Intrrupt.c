
#include <xc.h>

int main(void)
{
       SREG|=(1<<7);
       GICR |= (1 << INT0);  // Enable INT0 interrupt
       MCUCR |= (1 << ISC01);  // Set for falling edge (ISC01 = 1, ISC00 = 0)
       MCUCR &= ~(1 << ISC00);  // Clear ISC00 for falling edge

while(1)
{
	
}

}

ISR(INT0_vect)
{
	PORTA^=(1<<0);
}

