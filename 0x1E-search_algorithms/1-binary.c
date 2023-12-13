#include "search_algos.h"

/**
 * binary_search - function that search for a value
 * in a sorted array using the binary search algo
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to look for
 * Return: index of the value or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int start_index, end_index, mid_index, i;

	start_index = 0;
	end_index = (int)(size - 1);
	while (array && start_index <= end_index)
	{
		printf("Searching in array: ");
		for (i = start_index; i < end_index; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end_index]);
		mid_index =  start_index + (end_index - start_index) / 2;
		if (value == array[mid_index])
			return (mid_index);

		else if (value > array[mid_index])
		{
			start_index = mid_index + 1;
		}
		else
			end_index = mid_index - 1;

	}
	return (-1);
}
