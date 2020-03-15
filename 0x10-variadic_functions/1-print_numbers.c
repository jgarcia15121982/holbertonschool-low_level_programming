#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - Function that prints numbers, foloowed by a new line.
 * @separator: String to be printed between the strings.
 * @n: number of integers.
 *
 * Return: A result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(arguments, const unsigned int));
		else if (separator != NULL)
		{
			printf("%d", va_arg(arguments, const unsigned int));
			if (i < n - 1)
				printf("%s",  separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
