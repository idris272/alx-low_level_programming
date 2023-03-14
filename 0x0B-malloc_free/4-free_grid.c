#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array created by
 * alloc_grid
 * @grid: 2 dimensional array created
 * @height: rows of the arrays.
 *
 * Return: void
 */
void **free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		for(int i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
