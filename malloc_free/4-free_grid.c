#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: address of 2 dimensional grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
