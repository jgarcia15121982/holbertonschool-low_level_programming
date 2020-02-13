#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 * @long: Data type.
 */
void fibonacci(long, long);

int main(void)
{
	fibonacci(1, 2);
	printf("\n");
	return (0);
}





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
			printf(", ");

	}
}
