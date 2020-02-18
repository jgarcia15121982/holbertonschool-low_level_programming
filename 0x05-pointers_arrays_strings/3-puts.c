#include "holberton.h"

/**
 * _puts - Prints a string
 * @str: Pointer to a char type
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	char s;

	while (*str)
	{
		s = *str;
		_putchar(s);
		str++;
	}
	_putchar('\n');
}
