#include "main.h"

/**
 * _is_it_prime - confirms if the number is prime
 * @n: number input
 * @d: int devider of n
 * Return: 1 if prime number or 0 if not
 */
int _is_it_prime(int n, int d)
{
	if (n % d == 0)
	{
		if (n == d)
			return (1);
		else
			return (0);
	}
	_is_it_prime(n, d + 1);
}

/**
 * is_prime_number - function show if a number is prime
 * @n: input integer
 * Return: 1 if the input integer is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_is_it_prime(n, 2));
}
