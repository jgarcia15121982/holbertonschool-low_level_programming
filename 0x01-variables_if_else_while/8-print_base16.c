#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x = 0;
	int y = 0;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}

	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
