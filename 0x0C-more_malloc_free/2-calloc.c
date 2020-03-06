#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements of the array.
 * @size: Size of each element of the array.
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb + 1);

	if (!p)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}