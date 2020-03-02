#include <stdio.h>
#include "holberton.h"
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
