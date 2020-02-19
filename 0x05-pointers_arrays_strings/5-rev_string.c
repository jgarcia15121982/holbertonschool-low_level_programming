#include "holberton.h"

/**
 * rev_string - reverses a string.
 *
 * void: Return nothing
 * @s: a pointer to char s
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int cont = 0, cont2 = 0;
	char temp;

	while (s[cont] !=  '\0')
	{
		cont++;
	}

	while (cont > cont2)
	{
		temp = s[cont - 1];
		s[cont - 1] = s[cont2];
		s[cont2] = temp;
		cont2++;
		cont--;
	}
}
