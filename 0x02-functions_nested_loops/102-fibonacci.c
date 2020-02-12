#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n, first = 1, second = 2, next, c;

	n = 50;

	for (c = 1; c <= 50; c++)
	{
		if (c <= 2)
		{
			next = c;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}

		printf("%ld", next);

		if (c != 50)
			printf(", ");
	}
	printf("\n");
}
