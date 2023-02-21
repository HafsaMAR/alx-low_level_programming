#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: integer input
 * Return: the last digit of a number
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (num < 0)
	{
		ld = -1 * ld;
	}
	_putchar(ld + '0');
	return (ld);
}
