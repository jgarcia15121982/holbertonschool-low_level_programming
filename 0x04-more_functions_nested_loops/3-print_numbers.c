#include "holberton.h"

/**
 * print_numbers - uses "holberton.h" to write numbers from 0 to 9
 * void: it doesn't return a value
 *
 * Return: It has no return
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
