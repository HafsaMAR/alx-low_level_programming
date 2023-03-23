#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all parameters
 * @n: constant input int
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;
	
	if (n == 0)
		return (0);
	va_start (ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end(ap);
	return (sum);
}
