#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_ch - print a character
 * @list: list of arguments
 */
void print_ch(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - print a integer
 * @list: list of arguments
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_flt - print a float
 * @list: list of arguments
 */
void print_flt(va_list list)
{
	printf("%.2f", va_arg(list, double));
}
/**
 * print_str - print a string
 * @list: list of arguments
 */
void print_str(va_list list)
{
	char *st = va_arg(list, char *);

	if (st == NULL)
		st = "(nil)";
	printf("%s", st);
}
/**
 * print_all - print all arguments
 * @format: receives all formats
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	frm ft[] = {
	{'c', print_ch},
	{'i', print_int},
	{'f', print_flt},
	{'s', print_str},
	{NULL, NULL}
	};
	char *s = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ft[j].fmt)
			{
				printf("%s", s);
				ft[j].f(args);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}


