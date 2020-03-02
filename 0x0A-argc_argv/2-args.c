#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 * @argc: Size of the argv array
 * @argv: Array of size argc
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;


	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}

