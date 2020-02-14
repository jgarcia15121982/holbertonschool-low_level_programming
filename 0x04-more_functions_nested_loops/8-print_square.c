#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: Size of square that user requires
 *
 * Return: It has no return.
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
