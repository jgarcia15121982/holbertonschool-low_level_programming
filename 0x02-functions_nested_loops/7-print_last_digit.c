#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number for evaluation.
 *
 * Return: the digit requested.
 */
int print_last_digit(int n)
{
	int a;
	a = n % 10;
	return(_putchar(a));
}
