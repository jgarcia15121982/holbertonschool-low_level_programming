#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * void: it doesn't return a value
 * @a: a pointer to integer a
 * @b: a pointer to integer b
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
