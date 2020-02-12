#include <stdio.h>

/**
 * fibonacci - the first 50 Fibonacci numbers, starting with 1 and 2.
 * @first: First number of the sequence
 * @second: Second number of the sequence
 *
 * Return: It has no return
 */
void fibonacci(long first, long second)
{
	long n, next, c;

	n = 50;

	for (c = 1; c <= n; c++)
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

		if (c != n)
			printf(", \n");

	}
}
