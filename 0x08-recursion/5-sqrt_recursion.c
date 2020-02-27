#include "holberton.h"
/**
 * product - Auxiliary function
 * @z: square
 * @n: Number for find square
 * Return: A product
 */
int product(int z, int  n)
{
	if (z > n)
	{
		return (-1);
	}
	if (z * z == n)
	{
		return (z);
	}
	z++;
	return (product(z, n));
}
/**
 * _sqrt_recursion - Function that finds sqrt
 * @n: Number for find sqrt
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int z = 2;

	if (n == 1)
	{
		return (1);
	}
	return (product(z, n));
}
