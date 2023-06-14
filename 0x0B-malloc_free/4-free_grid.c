#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * 2dimensional gridpreviously created by my alloc_grid function
 * @grid: 2dimensional grid
 * @height: height of grid
 * Description: frees memory of the grid
 * Return: (0) null
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
