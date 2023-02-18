#include <stdio.h>
/**
 * main -Entry
 * Return: always 0(success)
 * Description: print the first single characters in hexadecimal base
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
