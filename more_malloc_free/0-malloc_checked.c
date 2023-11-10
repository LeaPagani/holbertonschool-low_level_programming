#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - Function that allocates memory using malloc
* @b: int
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
