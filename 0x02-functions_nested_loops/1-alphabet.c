#include "holberton.h"

/**
 * print_alphabet - uses "holberton.h" to write the alphabet in lowercase
 * void: it doesn't return a value
 *
 * Return: It has no return
 */
void print_alphabet(void)
{
	int x = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
