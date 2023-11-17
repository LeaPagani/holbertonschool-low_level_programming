#include "dog.h"
/**
 * print_dog - Print struct
 * @d: Pointer to struct
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (!(d->age <= 0))
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: 0.000000\n");
		}
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
			printf("Owner: (nil)\n");
	}
}
