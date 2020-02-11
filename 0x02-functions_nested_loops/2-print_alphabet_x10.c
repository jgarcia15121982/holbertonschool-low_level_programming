#include "holberton.h"
/**
 * print_alphabet_x10 - uses "holberton.h" to write the alphabet in lowercase
 * 10 times.
 * void: it doesn't return a value
 *
 * Return: It has no return
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
}

/**
 * print_alphabet - print the alphabet in lowercase
 * void: it doesn't return a value
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
