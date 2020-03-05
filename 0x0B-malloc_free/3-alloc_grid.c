#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null if negative or fail, else grid.
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		s[j] = malloc(sizeof(int) * width);
		if (s[j] == NULL)
		{
			for (i = 0; s[i]; i++)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			s[j][i] = 0;
	}
	return (s);
}
