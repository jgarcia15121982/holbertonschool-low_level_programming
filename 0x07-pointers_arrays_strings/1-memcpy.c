#include "holberton.h"
/**
 * _memcpy - Function that copies a memory area
 * @dest: string destination buffer
 * @src: string source buffer
 * @n: positions to be replaced
 * Return: Pointer to buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
