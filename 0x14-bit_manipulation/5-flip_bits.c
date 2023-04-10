#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_bits = 0;

	while (xor_result)
	{
		num_bits += xor_result & 1;
		xor_result >>= 1;
	}

	return (num_bits);
}
