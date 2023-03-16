#include <stdio.h>
#include <stdlin.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned integer input
 * Return: 0 success or 98 in failure
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = maloc(b);
	if (ptr == NULL)
		return (98);
	return (0);
}
