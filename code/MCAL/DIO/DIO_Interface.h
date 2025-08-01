#ifndef DIO_Interface_H
#define DIO_Interface_H

// Include the Register header file
#include "DIO_Register.h"
#include "../WAIT/WAIT.h"

// New data types
typedef enum {
    DIO_LOW,
    DIO_HIGH
} DIO_State;

typedef enum {
    DIO_INPUT,
    DIO_OUTPUT
} DIO_Direction;

void DIO_PinMode(uint8_t portNumber,uint8_t pinNumber, DIO_Direction direction);	// Change pin mode
void DIO_PinWrite(uint8_t portNumber,uint8_t pinNumber,DIO_State state);			// Write to pin
void DIO_PinToggle(uint8_t portNumber, uint8_t pinNumber);							// Toggle pin state
DIO_State DIO_PinRead(uint8_t portNumber, uint8_t pinNumber);						// Read from pin

#endif /* DIO_Interface_H */