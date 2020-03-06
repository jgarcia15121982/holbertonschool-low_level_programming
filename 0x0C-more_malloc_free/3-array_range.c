#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers.
 * @min: Minimum size of the array
 * @max: Maximum size of the array
 *
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;
	return (p);
}
