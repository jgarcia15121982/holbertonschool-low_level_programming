#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 *
 * void: Return nothing
 * @s: a pointer to char s
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	while (cont > 0)
	{
		_putchar(s[cont - 1]);
		cont--;
	}

	_putchar('\n');

}
