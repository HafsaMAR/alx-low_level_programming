#include "search_algos.h"

/**
 * linear_search - function that look for a value in array using linear search
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to look for  in the array
 * Return: the first occurence of the value in the array -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (*array && array && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
