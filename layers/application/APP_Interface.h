#ifndef APP_INTERFACE_H
#define APP_INTERFACE_H

// Include the bellow layers
#include "../HCL/KEYPAD/KEYPAD_Interface.h"
#include "../HCL/LCD/LCD_Interface.h"
#include "../HCL/SERVO/SERVO_Interface.h"
#include "../HCL/LED/LED_Interface.h"

// Declare variables 
char password[4];				// Register the password.
char inputed_key;				// Deals with inputed password. 
char lock_again[0];				// To lock the door again.

// Function prototypes
void initialize();				// Initialize all Hardware(LCD,LED,KEYPAD,SERVO).	
void runLockSystem();			// Run the system to get password from user.
void handlePasswordInput();		// Check if the password is correct

#endif /* APP_INTERFACE_H */