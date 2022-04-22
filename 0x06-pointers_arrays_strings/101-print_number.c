/**
 * File: 101-print_number.c
 * Auth: Brennan D barban
 */
#include "main.h"

/**
 * print_number _ print integers
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(n / 10);

	_putchar((num % 10) + '0';
			}
			
