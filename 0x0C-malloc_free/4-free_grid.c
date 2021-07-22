#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - will free a 2 dimen grid created by alloc_grid
*
* @grid: the grid
* @height: height of grid
*
* Return: 0 if successful
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
