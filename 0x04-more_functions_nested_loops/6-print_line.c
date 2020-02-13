#include "holberton.h"

/**
 * print_line - Draw a straight line in the terminal
 *
 * void: it doesn't return a value
 * @n: number of times the line will be printed
 *
 * Return: It has no return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
