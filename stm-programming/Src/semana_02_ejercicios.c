/*
 * semana_02_ejercicios.c
 *
 *  Created on: May 24, 2026
 *      Author: ingfisica
 */

#include <stdint.h>
#include "stm32f4xx.h"


uint8_t value ;
uint8_t mask ;
uint8_t result ;

uint8_t a ;
uint8_t b ;
uint8_t result1 ;
uint8_t result2 ;

uint8_t simulated_register = 0x00 ;

int main(void)
{

	#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)

		SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));

	#endif

	value = 0b10100000 ;
	mask = 0b10000101 ;

	result = value | mask ;

	a = 0b00001111;
	b = 0b10100101 ;

	result1 = ~a ;
	result2 = ~b ;

	value = 0b11111111 ;

	result1 |= ~(value) ;

	value = 0b10110011 ;
	mask = 0b00001111 ;

	result1 = value ^ mask ;
	result2 = result1 ^ mask ;

	/* first */

	simulated_register |= 0x18 ;

	/* second */

	simulated_register &= ~(0x08) ;

	/* third */

	simulated_register ^= 0x10 ;

	/* fourth */

	simulated_register ^= 0x10 ;

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN ;
	GPIOA->MODER &= ~(0x3 << 10) ;
	GPIOA->MODER |= (0x1 << 10) ;
	GPIOA->ODR |= 0x20 ;

	GPIOA->ODR &= ~(0x1 << 5) ;

    /* Loop forever */
	while(1){



	}
}
