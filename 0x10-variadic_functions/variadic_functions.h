#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
/**
 * struct fmt - Struct format
 *
 * @fmt: A char data
 * @f: The function associated
 */
typedef struct fmt
{
	char fmt;
	void (*f)(va_list);
} frm;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
