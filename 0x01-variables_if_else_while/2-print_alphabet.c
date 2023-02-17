#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 *
 * Description: print lowercase alphabet
 */
int main(void)
{
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;

	while(a <= 25){
		putchar(lower_alphabet[a]);
			a++;
	}
		putchar('\n');
	return (0);
}
