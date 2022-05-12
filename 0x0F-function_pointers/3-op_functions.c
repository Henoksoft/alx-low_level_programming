#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Adds two numbers
 * @a: Int number 1
 * @b: Int number 2
 *
 * Return: Int of the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: Int number 1
 * @b: Int number 2
 *
 * Return: Int of the difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples of two numbers
 * @a: Int number 1
 * @b: Int number 2
 *
 * Return: product two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: Int number 1
 * @b: Int number 2
 *
 * return: last division of two numbers
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
 * op_mod - remainder 
 * @a: Int number 1
 * @b: Int number 2
 *
 * Return: remainder
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
