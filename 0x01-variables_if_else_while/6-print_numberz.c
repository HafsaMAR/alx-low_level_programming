#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int Numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	while(x < 10)
	{
		putchar(Numbers[x] + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
