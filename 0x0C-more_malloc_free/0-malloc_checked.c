#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned integer input
 * Return: pointer (success) or 98 in failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *) malloc(b);

	if (!ptr)
		exit(98);
	return ((void *)ptr);
}
