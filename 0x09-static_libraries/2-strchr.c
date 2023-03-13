#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - this checks for the occurence of a char in a string
 *  @s: main string
 *  @c: search char
 *  Return: a char
 */
char *_strchr(char *s, char c)
{
	return strchr(s, c);
}

