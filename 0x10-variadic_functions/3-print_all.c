#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_ch(va_list c)
{
	printf("%c", va_arg(c, char));
}

void print_int(va_list n)
{
	printf("%d", va_arg(n, int));
}

void print_flt(va_list f)
{
	printf("%.2f",va_arg(f, float));
}

void print_str(va_list s)
{
	if (s)
		printf("%s", va_arg(*s, char));
	return
		printf("(nil)");
}	

void print_all(const char * const format, ...)
{
	var_list args;
	frm ft [] = {
	{"c", print_ch},
	{"i", print_int},
	{"f", print_flt},
	{"s", print_str}
	};

	va_start(args, format);
}


