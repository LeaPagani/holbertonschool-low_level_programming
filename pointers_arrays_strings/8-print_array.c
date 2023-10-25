#include "main.h"
#include <stdio.h>

/**
* print_array - Function that prints n elements of an array
* @a: Array
* @n: Number of elements
*/
void print_array(int *a, int n)
{
	int x = 0;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (x = 1; x < n; x++)
		{
			printf(", %d", a[x]);
		}
	}

	printf("\n");
}
