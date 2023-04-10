#include <stdio.h>

/**
 * print_binary - prints binary representation of n
 * @n: input number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	printf("%lu", n & 1);
}
