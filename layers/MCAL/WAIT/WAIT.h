#ifndef WAIT_H_
#define WAIT_H_

#include "../DIO/DIO_Interface.h"
#define F_CPU 100000UL

// Delay in milliseconds
void wait_ms(uint16_t milliseconds);
// Delay in microseconds
void wait_us(uint16_t microseconds);

#endif /* WAIT_H_ */