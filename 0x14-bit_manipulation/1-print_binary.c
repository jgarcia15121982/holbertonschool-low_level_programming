#include "holberton.h"
/**
 * print_binary - Function that prints the binary
 * representation of a number.
 * @n: Number to be represented
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
