#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - This function concatenates n bytes of string
 * to the other
 * @dest: the destination string
 * @src: the target string
 * @n: n bytes of src
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}

