#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - this fill a memory area with n butes of a constant byte
 *  @b: a char
 *  @s: pointer to a memory area
 *  @n: int
 *
 *  Return: a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}

