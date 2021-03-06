#include <stdlib.h>

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

/**
 * _strdup - Function that returnd a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: String given as a parameter.
 *
 * Return: A pointer
 */
char *_strdup(char *str)
{

	int size;
	char *sr;
	int i;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	sr = malloc(sizeof(char) * size + 1);

	if (sr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			*(sr + i) = *(str + i);
		}
		sr[i] = '\0';

		return (sr);
	}
	else
		return (NULL);

	return (0);
}
