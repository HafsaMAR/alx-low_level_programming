#include "main.h"
/**
 * main - Entry
 * Return: Always 0 (success)
 *
 * Description: function that prints the alphabet
 */
void print_alphabet(void)
{
	char alpha1;
	
	for(alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
		_putchar(alpha1);
	_putchar('\n');
}
