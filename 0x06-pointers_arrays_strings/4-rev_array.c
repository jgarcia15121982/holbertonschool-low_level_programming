#include "holberton.h"
/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: array pointer
 * @n: number of elements of the array
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp, j = n - 1;

	while (j > n / 2)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
		j--;
		i++;
	}
}
