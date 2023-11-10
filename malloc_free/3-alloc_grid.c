#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Funciton that returns pointer to 2D array
* @width: Width of string
* @height: Height of string
* Return: Pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}

    for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
