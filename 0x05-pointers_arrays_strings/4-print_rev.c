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
	int cont = _strlen(s);

	while (cont >= 0)
	{
		_putchar(s[cont]);
		cont--;
	}

	_putchar('\n');

}

/**
 * _strlen - returns the length of a string
 *
 * int: return the length of a string
 * @s: a pointer to char s
 *
 * Return: An integer with th length of a string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*s)
	{
		s++;
		cont++;
	}
	return (cont);
}
