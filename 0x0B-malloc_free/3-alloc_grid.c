#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int.
 * @height: int.
 *
 * Return: pointer of int
 */
int **alloc_grid(int width, int height)
{
	int **grid_out;
	int i, j;

	if (width < 1 || height < 1)
		return ('\0');

	grid_out = malloc(height * sizeof(int *));
	if (grid_out == NULL)
	{
		free(grid_out);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		grid_out[i] = malloc(width * sizeof(int));
		if (grid_out[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid_out[i]);
			free(grid_out);
			return ('\0');
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_out[i][j] = 0;

	return (grid_out);
}
