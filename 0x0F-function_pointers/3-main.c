#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point
 * Description: program that performs simple operations
 * @argc: counter agrument
 * @agrv: vector argument
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	char *s;

	if (argc != 4)
	{
		printf("Error \n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];
	if (get_op_func(s) == NULL)
	{
		printf("Error \n");
		exit (99);
	}
	result = get_op_func(s)(num1, num2);
	printf("%d\n", result);
	return(0);
}
