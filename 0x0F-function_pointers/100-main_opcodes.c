#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: counter argument
 * @argv: vector argument
 * Description: program that prints the opcodes of its own main function
 * Return: void
 */
void main(int argc, char *argv[])
{
	int i;
	void (*adress)(int, char**) =  &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x", *(unsigned char *)(adress + i));
		while (i < (atoi(argv[1]) - 1))
		{
			printf(" ");
			break;
		}
	}
	printf("\n");
	return;
}
