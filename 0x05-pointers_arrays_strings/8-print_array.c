#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: array to print
 * @n: number of elements of the array to be printed
 * Return: None;
 */
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		printf("%d", a[cont]);

		if (cont != (n - 1))
			printf(", ");

	}
	printf("\n");
}
