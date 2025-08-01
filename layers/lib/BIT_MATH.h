#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SETBIT(VAR, BIT)            VAR |= (1<<BIT)
#define CLEARBIT(VAR, BIT)          VAR &= ~(1<<BIT)
#define TOGGLEBIT(VAR, BIT)         VAR ^= (1<<BIT)
#define READBIT(VAR, BIT)           (VAR>>BIT) & 1


#endif