#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - this checks for the first occurence
 *of a char in string a from string b
 *  @s: main string
 *  @accept: search char
 *  Return: a char
 */
char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}

