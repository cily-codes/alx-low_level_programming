#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory space of created grid
 *
 * @grid: created grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
