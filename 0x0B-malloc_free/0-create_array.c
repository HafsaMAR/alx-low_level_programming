#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @c: initial character
 * @size: dimension of array
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i <= size; i++);
	array[i] = c;
	return (array);
}
