#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Function that allocates memory using malloc
* @nmemb: int
* @size: Type of data
* Return: Pointer to allocated memory
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
