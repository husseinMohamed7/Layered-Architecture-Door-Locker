#ifndef KEYPAD_INTERFACE_H
#define KEYPAD_INTERFACE_H

// Include the bellow layers
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/WAIT/WAIT.h"

// Define the keypad layout and pins
#define KEYPAD_ROWS 4
#define KEYPAD_COLUMNS 4
#define KEYPAD_PORT PORTD
#define KEYPAD_PIN PIND
#define KEYPAD_DDR DDRD

// Function prototypes
char keypad_getKey();
char scankey();
void keypad_init();

#endif /* KEYPAD_INTERFACE_H */
