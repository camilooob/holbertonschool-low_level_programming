#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - grid for int.
 * @grid: the address grid
 * @height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
	grid = NULL;
}
