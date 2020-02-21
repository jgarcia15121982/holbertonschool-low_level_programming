#include "holberton.h"
/**
 * leet - Function that encodes a string into 1337.
 * @a: array pointer.
 * Return: a pointer.
 */
char *leet(char *a)
{
	char dic[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == dic[j])
				a[i] = leet[j];
		}
	}
	return (a);
}
