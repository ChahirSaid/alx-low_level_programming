#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freesthe memoryof a 2 dimensionalgrid
 * @grid: the array freed
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
