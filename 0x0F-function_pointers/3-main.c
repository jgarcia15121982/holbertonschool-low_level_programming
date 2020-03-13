#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
/**
 * main - Entry point
 * @argc: Size of the argv array
 * @argv: Array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc >= 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*'
	|| argv[2] != '/' || argv[2] || '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operator = argv[2];

	calc = (*get_op_func(operator))(num1, num2);
	printf("%d\n", calc);
	return (0);

}
