#include "holberton.h"

/**
 * print_diagonal - prints "\" at the end of lines and spaces
 * that user requires.
 * @n: Number of lines that user requires
 *
 * Return: It has no return.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{

				if (j == i)

					_putchar('\\');

				else

					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
