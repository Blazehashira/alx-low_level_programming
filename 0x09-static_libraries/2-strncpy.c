#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - This function copies n bytes of string
 * to the other
 * @dest: the destination string
 * @src: the target string
 * @n: n bytes of src
 *
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return strncpy(dest, src, n);
}

