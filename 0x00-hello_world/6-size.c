#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main()
{
   printf("Size of char: %lu byte\n", sizeof(char));
   printf("Size of int: %lu bytes\n", sizeof(int));
   printf("Size of long: %lu bytes\n", sizeof(long));
   printf("Size of float: %lu bytes\n", sizeof(float));
   printf("Size of double: %lu bytes\n", sizeof(double));
   return 0;
}
