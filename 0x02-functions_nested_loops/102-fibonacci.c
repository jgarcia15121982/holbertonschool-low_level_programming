#include <stdio.h>

/**
 * fibonacci - the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: It has no return
 */
void fibonacci(void)
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

		printf("\n");
	}
}
