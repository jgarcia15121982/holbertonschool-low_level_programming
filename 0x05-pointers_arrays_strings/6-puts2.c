#include "holberton.h"
/**
 * puts2 - Prints pair number from a string.
 * @str: String to evaluate.
 * Return: None;
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
