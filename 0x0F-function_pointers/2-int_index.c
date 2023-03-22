#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to comparing function
 * Return: index of the first element, 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		cmp(*(array + i));
	if (i >= size)
		return (-1);
	else
		return (i);
}
