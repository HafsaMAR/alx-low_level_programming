#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * @h: hour parameter
 * @m: minute parameter
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while(h < 24)
	{
		while(m <60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
