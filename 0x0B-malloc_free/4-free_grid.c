#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: parameter
 * @height: parameter
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
