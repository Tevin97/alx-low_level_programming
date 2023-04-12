#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2D array of integers alloc_grid
 * @grid: pointer to grid to free
 * @height: height of the grid
 * Return: nothing
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
