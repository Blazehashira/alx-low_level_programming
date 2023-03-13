#include <string.h>

/**
 * _memcpy - this copies n bytes of a memory  area to another.
 *  @dest: destination.memeory
 *  @src: pointer to a memory area
 *  @n: int
 *
 *  Return: a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest, src, n);
}

