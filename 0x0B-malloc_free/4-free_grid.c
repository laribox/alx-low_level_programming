#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: Two dimension array
 * @height: Array rows
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0 ; i--)
	{
		free(grid[i]);
	}
	free(grid);

}
