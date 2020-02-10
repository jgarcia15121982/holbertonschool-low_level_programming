#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main (void)
{
	int i;
	char a[] = "Holberton\n";
	char *b;
	char c;
	
	for (i = 0; i <= 9; i++)
	{
		b = &a[i];
		c = *b;
		_putchar(c);
	}

	return (0);
}
