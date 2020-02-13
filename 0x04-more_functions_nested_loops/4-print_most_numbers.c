#include "holberton.h"

/**
 * print_most_numbers - uses "holberton.h" to write numbers from 0 to 9
 * except 2 and 4.
 * void: it doesn't return a value
 *
 * Return: It has no return
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
