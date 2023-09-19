/*
 *  	Created on: 18/09/2023
 *      LAYER : MCAL
 *      Author: Mohamed sarary
 *      File  : ADC_Private.h
 */

#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_


/********************** ADC REGISTERS ***********************/

#define ADMUX				*((volatile u8*)(0x27))
#define ADCSRA				*((volatile u8*)(0x26))
#define ADCH				*((volatile u8*)(0x25))
#define ADCL				*((volatile u8*)(0x24))
#define ADC					*((volatile u16*)(0x24))
#define SFIOR				*((volatile u8*)(0x50))


/***************** ADMUX REGISTER BITS *****************/
#define ADMUX_ADLAR				5
#define ADMUX_REFS0				6
#define ADMUX_REFS1				7


/***************** ADCSRA REGISTER BITS *****************/
#define ADCSRA_ADPS0			0
#define ADCSRA_ADPS1			1
#define ADCSRA_ADPS2			2
#define ADCSRA_ADIE				3
#define ADCSRA_ADIF				4
#define ADCSRA_ADATE			5
#define ADCSRA_ADSC				6
#define ADCSRA_ADEN				7


/***************** SFIOR REGISTER BITS *****************/
#define SFIOR_ADTS0				5
#define SFIOR_ADTS1				6
#define SFIOR_ADTS2				7

#define NULL					0

static void (*ADC_CallBack) (void) = NULL ;

void __vector_16 (void) __attribute__ ((signal)) ;

#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
