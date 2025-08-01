#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

// Include the bellow layers
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/WAIT/WAIT.h"

// Pin configuration
#define LCD_RS				PB0		// Register select
#define LCD_RW				PB1		// Read = 1/Write = 0
#define LCD_EN				PB2		// Enable
#define LCD_DATA_PORT		PORTA	// Data ports
#define LCD_CONTROL_PORT	PORTB	// Control ports
#define LCD_DATA_DDR		DDRA	// The data DDR
#define LCD_CONTROL_DDR		DDRB	// The control DDR

// LCD commands
#define LCD_CLEAR			0x01
#define LCD_RETURN_HOME		0x02
#define LCD_ENTRY_MODE		0x06
#define LCD_DISPLAY_ON		0x0C
#define LCD_FUNCTION_SET	0x38
#define LCD_START_LINE2		0xC0

// Function prototypes
void lcd_init();									// Initialize the LCD ports
void lcd_command_write(unsigned char command);		// Write command
void lcd_data_write(char data);						// Display a single character
void lcd_string_write(char* string);				// Display string

#endif /* LCD_INTERFACE_H */