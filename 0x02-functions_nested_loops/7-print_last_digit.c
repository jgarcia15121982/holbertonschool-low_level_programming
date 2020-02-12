#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number for evaluation.
 *
 * Return: the digit requested.
 */
int print_last_digit(int n)
{
	int mod;

	if (n > 0)
	{
		mod = n % 10;
		_putchar(mod + '0');
	}
	else if (n < 0)
	{
		n = -n;
		mod = n % 10;
		_putchar('0' + mod);
		return (mod);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
