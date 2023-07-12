#include "main.h"
#include <stdlib.h>
/**
  *free_grid - Free 2D grid
  *@grid: The grid itself
  *@height: Height of grid
  *
  *Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
