#include <stdlib.h>

/**
 * main - returns a pointer to a 2 dimensional array
 * @height: rows of the array
 * @width:  columns of the array
 *
 * Return: a pointer to a 2 demensional array
 */
int **alloc_grid(int width, int height)
{       
        if (width <= 0 || height <= 0)
                return (NULL);
        
        int **grid = (int **)calloc(height, sizeof(int *));
        if (grid == 0)
        {       
                return (NULL);
                free(grid);
        }       
        
        for(int i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for(int j = 0; j < i; j++)
				free(grid[j];
		}
		free[grid];
		return (NULL);
	}
	return (grid);
}
