#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main funct
 * @argc: param count
 * @argv: param poiter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	}
	return (sum);
}
