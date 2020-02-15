#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: Size of triangle that user requires
 *
 * Return: It has no return.
 */

void print_triangle(int size)
{
	int i, j, temp;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				temp = size - j;

				if (temp <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
