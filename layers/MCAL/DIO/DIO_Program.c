#include "DIO_Interface.h"

// 'A','B',... represents whether DDRA or DDRB,... 
void DIO_PinMode(uint8_t portNumber,uint8_t pinNumber, DIO_Direction direction){
    if (direction == DIO_OUTPUT) {
        switch (portNumber) {
            case 'A':
				SETBIT(DDRA,pinNumber);
                break;
            case 'B':
                SETBIT(DDRB,pinNumber);
                break;
            case 'C':
                SETBIT(DDRC,pinNumber);
                break;
            case 'D':
                SETBIT(DDRD,pinNumber);
                break;
        }
    } 
	else if (direction == DIO_INPUT) {
       switch (portNumber) {
	       case 'A':
	       CLEARBIT(DDRA,pinNumber);
	       break;
	       case 'B':
	       CLEARBIT(DDRB,pinNumber);
	       break;
	       case 'C':
	       CLEARBIT(DDRC,pinNumber);
	       break;
	       case 'D':
	       CLEARBIT(DDRD,pinNumber);
	       break;
       }
    }
}

void DIO_PinWrite(uint8_t portNumber,uint8_t pinNumber,DIO_State state){
    if (state == DIO_HIGH) {
        switch (portNumber) {
            case 'A':
                SETBIT(PORTA,pinNumber);
                break;
            case 'B':
                SETBIT(PORTB,pinNumber);
                break;
            case 'C':
                SETBIT(PORTC,pinNumber);
                break;
            case 'D':
                SETBIT(PORTD,pinNumber);
                break;
        }
    } else if (state == DIO_LOW) {
        switch (portNumber) {
	        case 'A':
	        CLEARBIT(PORTA,pinNumber);
	        break;
	        case 'B':
	        CLEARBIT(PORTB,pinNumber);
	        break;
	        case 'C':
	        CLEARBIT(PORTC,pinNumber);
	        break;
	        case 'D':
	        CLEARBIT(PORTD,pinNumber);
	        break;
        }
    }
}

void DIO_PinToggle(uint8_t portNumber, uint8_t pinNumber) {
    switch (portNumber) {
	    case 'A':
	    TOGGLEBIT(PORTA,pinNumber);
	    break;
	    case 'B':
	    TOGGLEBIT(PORTB,pinNumber);
	    break;
	    case 'C':
	    TOGGLEBIT(PORTC,pinNumber);
	    break;
	    case 'D':
	    TOGGLEBIT(PORTD,pinNumber);
	    break;
    }
}

DIO_State DIO_PinRead(uint8_t portNumber, uint8_t pinNumber){
    DIO_State state = 0;
    switch (portNumber) {
	    case 'A':
	    state = READBIT(PORTA,pinNumber);
	    break;
	    case 'B':
	    state = READBIT(PORTB,pinNumber);
	    break;
	    case 'C':
	    state = READBIT(PORTC,pinNumber);
	    break;
	    case 'D':
	    state = READBIT(PORTD,pinNumber);
	    break;
    }
    return state;
}
