#include "main.h"
/**
 * main - Entry
 * Description: function print_alphabet prints the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char alpha1;

	for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
		_putchar(alpha1);
	_putchar('\n');
}
