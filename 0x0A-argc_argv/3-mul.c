#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 * @argc: Size of the argv array
 * @argv: Array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc > 1)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
		printf("Error\n");

	return (1);
}
