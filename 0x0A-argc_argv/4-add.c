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
	int i, j;
	int sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (sum);
}
