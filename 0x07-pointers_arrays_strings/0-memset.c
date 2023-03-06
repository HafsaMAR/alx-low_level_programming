#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: first number of byte of memory
 * @s: pointer to memory area
 * @b: constant
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0, i <= n, i++)
	{
		s[i] = b;
	}
	return (s);
}
