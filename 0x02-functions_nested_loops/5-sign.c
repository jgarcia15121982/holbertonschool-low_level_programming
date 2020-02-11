#include "holberton.h"
/**
 * print_sign - It prints a '+' if number is greater than 0, prints '-'
 * if a number is lezz than 0 and print '0' if number is 0
 * @n: number for evaluation.
 *
 * Return: 1 if is greater than 0,  -1 if is less than 0.  0 if is 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
