#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - gives the lenght of initial segment of a string
 * matching another string
 * @s: main string
 * @accept: match string
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}

