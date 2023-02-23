#include <stdio.h>
#include "main.h"
/**
 * more_numbers - entry point
 * Description: prints numbers from 0 to 14, times 10
 * Return: void
 */
void more_numbers(void)
{
	char i;
	int counter;
	
	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
