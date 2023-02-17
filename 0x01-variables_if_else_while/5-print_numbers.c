#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (success)
 * Description : print array of digit in base 10
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
