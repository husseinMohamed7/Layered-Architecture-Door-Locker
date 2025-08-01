#include "SERVO_Interface.h"

void SERVO_Init(void) {
	// Set servo pin as output
	DIO_PinMode('C',SERVO_PIN, DIO_OUTPUT);
}

void SERVO_Change(uint8_t angle) {
	// Set the angle to 0 or 90 degree with run and delay
		switch(angle){
			case 90:
			DIO_PinWrite('C',SERVO_PIN, DIO_HIGH);
			wait_us(2000);
			DIO_PinWrite('C',SERVO_PIN, DIO_LOW);
			break;
			case 0:
			DIO_PinWrite('C',SERVO_PIN, DIO_HIGH);
			wait_us(242);
			DIO_PinWrite('C',SERVO_PIN, DIO_LOW);
			break;
		}	
	}
