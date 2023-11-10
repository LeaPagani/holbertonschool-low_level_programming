#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - Function that allocates memory using malloc
* @b: int
* Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	return (p);
}
