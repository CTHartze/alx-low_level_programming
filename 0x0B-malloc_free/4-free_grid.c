#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees int 2d array.
 * @grid: refers to 2d grid
 * @height: refers to grid dimension
 * Description: frees grid array memory
 * Return: 0
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
