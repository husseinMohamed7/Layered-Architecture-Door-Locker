#include "WAIT.h"

// Delay in milliseconds
void wait_ms(uint16_t milliseconds) {
	uint16_t i;
	while (milliseconds > 0) {
		for (i = 0; i < F_CPU / 1000; i++) {
			// Do nothing, empty loop
		}
		milliseconds--;
	}
}


// Delay in microseconds
void wait_us(uint16_t microseconds) {
	uint16_t i;
	while (microseconds > 0) {
		for (i = 0; i < F_CPU / 1000000; i++) {
			// Do nothing, empty loop
		}
		microseconds--;
	}
}