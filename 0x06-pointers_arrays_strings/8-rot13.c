#include "holberton.h"
/**
 * rot13 - Function that encodes a string using rot13.
 * @a: array pointer
 * Return: An array.
 */
char *rot13(char *a)
{
	char dic[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char leet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		j = 0;
		while (dic[j] != '\0')
		{
			if (a[i] == dic[j])
			{
				a[i] = leet[j];
				break;
			}
			j++;
		}
	}
	return (a);
}
