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

	unsigned long int mask = 1UL << 63;
	int bit = 0;


	while (mask)
	{
	if (n & mask)
	{
		putchar('1');
		bit = 1;
	}
	else if (bit)
	{
		putchar('0');
	}
	mask >>= 1;
	}

	if (!bit)
	{
		putchar('0');
	}
}
