#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Description: program that multiplies two numbers
 * Return: 0 success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num);
	}
	return (0);
}
