
/*
 * DA3.c
 *
 * Created: 2/17/2017 9:19:08 PM
 * Author : doriaj3
 */ 

#include <avr/io.h>
#define F_CPU 8000000L
#include <util/delay.h>
#include <math.h>

int main(void) {

DDRD |= (1 << 6) | ( 1 << 5);					    				// PD.6 (OC0A) and PD.6 (OC0B) is an output
DDRB |= (1 << 3);													// PB.3 (OC2A) is an output
																	// PWM with 25% duty cycle
																	// non-inverting mode
TCCR2A |= (1 << COM2A1);											// fast PWM mode
TCCR2A |= (1 << WGM21) | (1 <<WGM20);								// set prescaler to 8 and enable Timer2						
TCCR2B |= (1 << CS21);												
										
TCCR0A |= (1 << COM0A1) | ( 1 << COM0B1 );							// non-inverting mode 	// fast PWM mode											
TCCR0A |= (1 << WGM01) | (1 <<WGM00);								// set prescaler to 8 and enable Timer0
TCCR0B |= (1 << CS01);
 
 	while(1){														
//==============================									// Continuously loop each LED output every .5 seconds
OCR0A = 214;  // Red												// Configuration for each color code; RGB color codes
OCR2A = 112; // Green
OCR0B = 219; // Blue
PINB = ( 1 << 3 );
PIND = (1 << 5) | ( 1 << 6);
//==============================
_delay_ms(500);														// 1 second = 1000 miliseconds; therefore, for 
OCR0A = 102;  // Red												// half a second we delay by 500 milliseconds each 
OCR2A = 102; // Green												// color change.
OCR0B = 255; // Blue
PINB = ( 1 << 3 );
PIND = (1 << 5) | ( 1 << 6);
//==============================
_delay_ms(500);
OCR0A = 204;  // Red
OCR2A = 255; // Green
OCR0B = 255; // Blue
PINB = ( 1 << 3 );
PIND = (1 << 5) | ( 1 << 6);
//==============================
_delay_ms(500);
OCR0A = 0xFF;  // Red
OCR2A = 0xCC; // Green
OCR0B = 0xCC; // Blue
PINB = ( 1 << 3 );
PIND = (1 << 5) | ( 1 << 6);
//==============================
_delay_ms(500);
OCR0A = 0x99;  // Red
OCR2A = 0xCC; // Green
OCR0B = 0xFF; // Blue
PINB = ( 1 << 3 );
PIND = (1 << 5) | ( 1 << 6);
//==============================
_delay_ms(500);

}
}
