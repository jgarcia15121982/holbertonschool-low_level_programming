#include "holberton.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * @s: string buffer
 * @b: char that will be replace i position in buffer
 * @n: number of position to be replaced
 * Return: Pointer to buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
