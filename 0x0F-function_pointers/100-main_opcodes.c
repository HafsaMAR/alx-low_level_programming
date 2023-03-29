#include <stdio.h>
#include <string.h>

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

	for (i = 0; i < atoi(argv[1]); i++)
		if (argv[2] < 0)
			printf("Error\n");
	printf("%02x ", *(unsigned char *)(adress + i));
	printf("\n");
}
