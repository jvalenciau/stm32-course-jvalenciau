/*
 * semana_01_ejercicios.c
 *
 *  Created on: May 23, 2026
 *      Author: ingfisica
 */

#include <stdint.h>
#include "stm32f4xx.h"

uint8_t a ;
uint8_t b ;
uint8_t div_result ;
uint8_t mod_result ;
uint8_t mul_result ;
uint8_t result ;
uint8_t result1 ;

uint8_t x ;
uint8_t y ;
uint16_t sum ;

uint8_t val ;
uint8_t limit ;
uint8_t left1 ;
uint8_t left2 ;
uint8_t left3 ;
uint8_t right1 ;

uint8_t valor_1 ;
uint8_t valor_2 ;

uint8_t counter ;

uint8_t case_prove ;

int main(void)
{

	#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)

		SCB->CPACR |= ((3UL << (10*2)) | (3UL << (11*2)));

	#endif

	a = 17 ;
	b = 5 ;

	div_result = a / b ;
	mod_result = a % b ;
	mul_result = a * b ;
	result = div_result * b + mod_result ;

	x = 200 ;
	y = 100 ;

	sum = x + y ;

	val = 3 ;
	left1 = val << 1;
	left2 = val << 2;
	left3 = val << 3;
	right1 = val >> 3;

	limit = 0b10000000 ;
	limit = limit << 1 ;

	valor_1 = 0 ;
	valor_2 = 26 ;

	if (valor_1) {

		result = valor_1 ;

	} else if (valor_2) {

		result = valor_2 ;

	}

	sum = 0 ;
	counter = 1 ;

	result = 0 ;
	result1 = 0 ;

	while(0){

		result = 42 ;

	}



	do {

		result1 = 42 ;

	} while(0) ;

	result = 0 ;
	case_prove = 1;

	switch (case_prove) {

	case 1:

		result = 1;


	case 2:

		result = 2;

	case 3:

		result = 3;

		break ;

	default:

		result = 40;

		break;

	}


    /* Loop forever */
	while(1){



	}
}
