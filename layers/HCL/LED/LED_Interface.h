#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

// Include the bellow layers
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/WAIT/WAIT.h"

// Declare variables
#define	RED_LED		PC1				// Red LED port
#define GREEN_LED	PC2				// Green LED port

// Function prototypes
void LED_Init(void);				// Initialize the LED ports	
void LED_On(uint8_t ledColor);		// Turn on LED
void LED_Off(uint8_t ledColor);		// Turn off LED
void LED_Toggle(uint8_t ledColor);	// Toggle state

#endif /* LED_INTERFACE_H */
