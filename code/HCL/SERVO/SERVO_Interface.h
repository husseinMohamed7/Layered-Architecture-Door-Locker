#ifndef SERVO_INTERFACE_H
#define SERVO_INTERFACE_H

// Include the bellow layers
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/WAIT/WAIT.h"

// Declare variables 
#define SERVO_PIN   PC0					// The servo pin
#define SERVO_OFF	0					// The first angle
#define SERVO_ON	90					// The second angle

// Function prototypes
void SERVO_Init(void);					// Initialize the servo port	
void SERVO_Change(uint8_t state);		// Change angle

#endif /* SERVO_INTERFACE_H */
