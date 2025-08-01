#include "LED_Interface.h"

void LED_Init(void) {
	// Set LED pin as output
	DIO_PinMode('C',RED_LED, DIO_OUTPUT);
	DIO_PinMode('C',GREEN_LED, DIO_OUTPUT);
}

void LED_On(uint8_t ledColor) {
	// Turn on the LED by setting the pin to HIGH
	switch(ledColor){
		case 'R':
		DIO_PinWrite('C',RED_LED, DIO_HIGH);
		break;
		case 'G':
		DIO_PinWrite('C',GREEN_LED, DIO_HIGH);
		break;
	}
}

void LED_Off(uint8_t ledColor) {
	// Turn off the LED by setting the pin to LOW
	switch(ledColor){
		case 'R':
		DIO_PinWrite('C',RED_LED, DIO_LOW);
		break;
		case 'G':
		DIO_PinWrite('C',GREEN_LED, DIO_LOW);
		break;
}

void LED_Toggle(void) {
	// Toggle the state of the LED
	switch(ledColor){
		case 'R':
		DIO_PinToggle('C',RED_LED);
		break;
		case 'G':
		DIO_PinToggle('C',GREEN_LED);
		break;
		}
	}
}