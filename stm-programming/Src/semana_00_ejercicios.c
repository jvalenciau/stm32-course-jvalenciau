#include <stdint.h>
#include "stm32f4xx.h"


uint8_t my_variable ;

uint8_t dec ;
uint8_t hex ;
uint8_t bin ;

uint8_t a ;
uint8_t b ;
uint8_t c ;
uint8_t d ;

uint8_t e ;

uint8_t x ;
uint8_t y ;

uint8_t result ;

uint8_t r1 ;
uint8_t r2 ;
uint8_t r3 ;
uint8_t r4 ;

int main(void)
{

	#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)

		SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));

	#endif

	my_variable = 42 ;

	dec = 65 ;
	hex = 0x41 ;
	bin = 0b01000001 ;

	result = 0x0f + 0x01 ;
	result = 0xff + 0x01 ;
	result = 0xA0 + 0x5f ;
	result = 0xA0 + 0x60 ;

	x = 0x0;
	x = 0x01;
	x = 0x02;
	x = 0x03;
	x = 0x04;
	x = 0x08;
	x = 0x10;
	x = 0x20;
	x = 0x40;
	x = 0x80;

	a = 5 ;
	b = 0 ;
	c = 255 ;

	r1 = ~a ;
	r2 = !b ;
	r3 = !c ;
	r4 = ~c ;

    /* Loop forever */
	while(1){



	}
}
