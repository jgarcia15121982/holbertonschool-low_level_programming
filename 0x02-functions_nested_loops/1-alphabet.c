#include "holberton.h"

/**
 * _print_alphabet - uses "holberton.h" to write the alphabet backwards
 * void: it doesn't return a value
 *
 * Return: It has no return
 */
void print_alphabet(void)
{
	int x = 0;

	for (x = 'z'; x >= 'a'; x--)
	{
		_putchar(x);
	}
	_putchar('\n');
}
