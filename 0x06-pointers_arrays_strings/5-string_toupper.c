#include "holberton.h"
/**
 * string_toupper - Function that changes all lowercase
 * letters of a string to uppercase.
 * @a: array pointer
 * Return: Pointer to string uppercased
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;
		i++;
	}
	return (a);
}
