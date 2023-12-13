#include "search_algos.h"

/**
 * interpolation_search - function that search for a value in a sorted array
 * using the interpolation search algorithm
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to look for
 * Return: index of the first occurence of the value
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* determin the prob position */
	int low = 0;
	int high = size - 1;
	size_t pos;

	while (array && low <= high)
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
