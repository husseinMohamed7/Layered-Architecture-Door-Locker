#include "KEYPAD_Interface.h"

void keypad_init() {
	// Set the keypad pins as inputs with pull-up resistors
	KEYPAD_DDR = 0xF0;
	KEYPAD_PORT = 0xFF;
}
char keypad_getKey(){
	// Check rows and columns
	 PORTD=0b11101111;
	 wait_ms(5);
	 if((PIND&0b00000001)==0)
	 {
		 return '7';
	 }
	 if((PIND&0b00000010)==0)
	 {
		 return '8';
	 }
	 if((PIND&0b00000100)==0)
	 {
		 return '9';
	 }
	 if((PIND&0b00001000)==0)
	 {
		 return 'A';
	 }
	 PORTD=0b11011111;
	 wait_ms(5);
	 if((PIND&0b00000001)==0)
	 {
		 return '4';
	 }
	 if((PIND&0b00000010)==0)
	 {
		 return '5';
	 }
	if((PIND&0b00000100)==0)
	 {
		 return '6';
	 }
	 if((PIND&0b00001000)==0)
	 {
		 return 'B';
	 }
	 PORTD=0b10111111;
	 wait_ms(5);
	 if((PIND&0b00000001)==0)
	 {
		 return '1';
	 }
	 if((PIND&0b00000010)==0)
	 {
		 return '2';
	 }
	 if((PIND&0b00000100)==0)
	 {
		 return '3';
	 }
	 if((PIND&0b00001000)==0)
	 {
		 return'C';
	 }
	 PORTD=0b01111111;
	 wait_ms(5);
	 if((PIND&0b00000001)==0)
	 {
		 return '*';
	 }
	 if((PIND&0b00000010)==0)
	 {
		 return '0';	 }	 if((PIND&0b00000100)==0)	 {		 return '#';	 }	 if((PIND&0b00001000)==0)	 {		 return'D';	 }	 return '-';
 }
char scankey(){
	char key = '-';				// The end of keys to keep it going
	while(key == '-')
	{
		key=keypad_getKey();
	}
	return key;
}