#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _isupper - checks for upper case letters
* @c: is a charracter
*
* Description: This function tells if a charracter is
* in uppercase letter.
*
* Return: 1 is uppercase and 0 is lowercase
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

