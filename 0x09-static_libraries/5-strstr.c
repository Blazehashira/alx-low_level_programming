#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - this checks for the first occurence of  a substring
 * @haystack: main string
 * @needle: search char
 * Return: a char
 */
char *_strstr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}

