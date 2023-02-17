#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (success)
 *
 * Description : print array of digit in base 10
 */
int main(void)
{
	int Numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int x = 0;
	while (x < 10)
	{
		printf("%d", Numbers[x]);
		x++;
	}
	printf("\n");
	return (0);
}
