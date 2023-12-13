#include "search_algos.h"

/**
 * jump_search - function that look for a value using the jump search algo
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of the first occurence of the value
*/

int jump_search(int *array, size_t size, int value)
{
	/* determine the jump size*/
	int jump = (int) sqrt(size);
	int high_index = jump;
	int low_index = 0;
	int jump_num = 0;
	int i;

	/* determine the number of jumps to do*/
	while (array && jump_num < (int) size / jump)
	{
		/* if the value is less than the highest value do linear search*/
		printf("Value checked array[%d] = [%d]\n", low_index, array[low_index]);
		if (value <= array[high_index])
		{
			printf("Value found between indexes [%d] and [%d]\n",
			array[low_index], array[high_index]);
			for (i = low_index; i < high_index; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		/* determine the highest and lowest value of each jump*/
		low_index += jump;
		high_index += jump;
		jump_num++;

	}
	return (-1);
}
