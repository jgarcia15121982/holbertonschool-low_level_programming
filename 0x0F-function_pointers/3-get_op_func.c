#include <stdlib.h>
#include "calc.h"
/**
 * get_op_func - Function that selects the
 * correct function to perform the operation
 * asked by the user.
 * @s: String that selects operator
 *
 * Return: an int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

}
