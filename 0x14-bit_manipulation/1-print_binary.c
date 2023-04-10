#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63; /* assume 64-bit system */

	if (n == 0)
		putchar('0');

	while (mask > 0)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}
