#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Function that frees struct
* @d: Pointer to struct
* Return: 0
**/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
