#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: 2 dimensional grid.
 * @height: height.
 * Description: frees a 2D grid previously created by alloc_grid function.
 * Return: NULL.
 *
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
