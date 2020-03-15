#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: number of strings.
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *s;

	if (n == 0)
		break;
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arguments, char *);
		if (s == NULL)
		{
			va_end(arguments);
			break;
		}
		if (separator == NULL)
		{
			if (s[0] == 00)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else if (separator != NULL)
		{
			if (s[0] == 00)
				printf("(nil)");
			else
				printf("%s", s);
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
