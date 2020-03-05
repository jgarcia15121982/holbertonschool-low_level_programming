/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: size of the memory
 * Return: Nothing.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
