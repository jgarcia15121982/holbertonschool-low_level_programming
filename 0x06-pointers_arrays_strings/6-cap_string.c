#include "holberton.h"
/**
 * cap_string - Function that capitalizes all words of a string.
 * @a: string
 * Return: A string.
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		while (!(a[i] >= 97 && a[i] <= 122))
		{
			i++;
			continue;
		}
		if (a[i - 1] == ',' ||
		    a[i - 1] == ';' ||
		    a[i - 1] == '.' ||
		    a[i - 1] == '!' ||
		    a[i - 1] == '?' ||
		    a[i - 1] == '"' ||
		    a[i - 1] == '(' ||
		    a[i - 1] == ')' ||
		    a[i - 1] == '{' ||
		    a[i - 1] == '}' ||
		    a[i - 1] == 10 ||
		    a[i - 1] == 0 ||
		    a[i - 1] == 9 ||
		    a[i - 1] == 32)
			a[i] -= 32;
		i++;
	}
	return (a);
}
