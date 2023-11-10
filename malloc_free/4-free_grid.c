#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Dupliate string with allocated memory
* @grid: Pointer to array
* @height: Height of string
* Return: grid
*/
void free_grid(int **grid, int height)
{
	for (height = height - 1; height >= 0; height--)
	{
		free(grid[height]);
	}
		free(grid);
}
