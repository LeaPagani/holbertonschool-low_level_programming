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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;

	return (p);
}
