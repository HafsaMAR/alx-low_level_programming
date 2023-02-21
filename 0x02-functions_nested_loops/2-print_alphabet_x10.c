#include "main.h"
/**
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while(i < 11)
	{
		char alpha10;
		for (alpha10 = 'a'; alpha10 <= 'z'; alpha10++)
			_putchar(alpha10);
		_putchar('\n');
		i++;
	}
}
