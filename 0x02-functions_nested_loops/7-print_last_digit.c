#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number for evaluation.
 *
 * Return: the digit requested.
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (n < 0)
	{
		r = -1 * r;
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0' + r);
		return (n % 10);
	}
}
