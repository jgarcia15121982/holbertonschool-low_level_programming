#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Number if arguments.
 *
 * Return: A result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int res = 0;

	if (n == 0)
		return (0);
	va_start(arguments, n);

	for (i = 0; i < n ; i++)
		res += va_arg(arguments, const unsigned int);
	va_end(arguments);
	return (res);
}
