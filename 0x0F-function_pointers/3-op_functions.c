#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that returns sum
 * @a: input integer
 * @b: input integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the difference
 * @a: input integer
 * @b: input integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the product
 * @a: input integer
 * @b: input integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the result of the division
 * @a: input integer
 * @b: input integer
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that returns the remainder of the division
 * @a: input integer
 * @b: input integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
