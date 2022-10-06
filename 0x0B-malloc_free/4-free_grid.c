#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: array of integers.
 * @height: int.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
