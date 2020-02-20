#include "holberton.h"
/**
 * puts_half - Prints second half of a string
 * @str: String to divide
 * Return: None
 */
void puts_half(char *str)
{
	int cont = 0;
	int half = 0;

	while (str[cont] != '\0')
	{
		cont++;
	}

	half = (cont + 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
