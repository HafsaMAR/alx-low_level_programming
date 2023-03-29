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
	int i = 0;

	void (*adress)(int, char**) =  &main;
	for (; i < atoi(argv[1]); i++)
		printf("%02x ", *(unsigned char*)(adress + i));
	printf("\n");
}
