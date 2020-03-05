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
 * str_concat - Function that concatenates two strings
 * @s1: String number 1.
 * @s2: String number 2.
 *
 * Return: A pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, tsize;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	tsize = _strlen(s1) + _strlen(s2);

	s3 = malloc(sizeof(char) * tsize + 1);

	if (s3 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*(s3 + i) = *(s1 + i);
		}
		for (j = 0; s2[j] != '\0'; i++, j++)
		{
			*(s3 + i) = *(s2 + j);
		}
		s3[i] = '\0';

		return (s3);
	}
	else
		return (NULL);
	return (0);
}

