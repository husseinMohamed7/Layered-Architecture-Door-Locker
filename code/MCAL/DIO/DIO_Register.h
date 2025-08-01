#ifndef DIO_REGISTER_H
#define DIO_REGISTER_H

// Include the bellow layers
#include "../../lib/STD_TYPES.h"
#include "../../lib/BIT_MATH.h"

// PORTS configuration
#define PORTA  (*(volatile uint8_t*) 0x3B)
#define DDRA   (*(volatile uint8_t*) 0x3A)
#define PINA   (*(volatile uint8_t*) 0x39)

#define PORTB  (*(volatile uint8_t*) 0x38)
#define DDRB   (*(volatile uint8_t*) 0x37)
#define PINB   (*(volatile uint8_t*) 0x36)

#define PORTC  (*(volatile uint8_t*) 0x35)
#define DDRC   (*(volatile uint8_t*) 0x34)
#define PINC   (*(volatile uint8_t*) 0x33)

#define PORTD  (*(volatile uint8_t*) 0x32)
#define DDRD   (*(volatile uint8_t*) 0x31)
#define PIND   (*(volatile uint8_t*) 0x30)


#define PD0     0
#define PD1		1
#define PD2     2

#define PB0		0
#define PB1		1
#define PB2		2

#define PC0		0
#define PC1		1
#define PC2		2
#define PC3		3

#endif /* DIO_REGISTER_H */
