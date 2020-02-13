#include "holberton.h"
/**
 * more_numbers- uses "holberton.h" to write numbers from 0 to 9
 * 10 times.
 * void: it doesn't return a value
 *
 * Return: It has no return
 */
void more_numbers(void)
{
	int num;
	int line;

	for (line = 48; line <= 57; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
