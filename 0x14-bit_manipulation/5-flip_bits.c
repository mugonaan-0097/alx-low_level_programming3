#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Number input 1.
 * @m: Number input 2.
 * Return: Number of the flip in the input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
