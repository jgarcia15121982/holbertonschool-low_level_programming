#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid previously created.
 * @grid: grid to be released
 * @height: height of the grid
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
