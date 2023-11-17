#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Function that creates a new dog
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog
* Return: Struct pointer or null
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int name_length, owner_length, name_i, owner_i;

	name_length = owner_length = 0;
	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	if (name != NULL)
		while (name[name_length] != '\0')
			name_length++;
	if (owner != NULL)
		while (owner[owner_length] != '\0')
			owner_length++;
	_dog->name = malloc(name_length * sizeof(char) + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(owner_length * sizeof(char) + 1);
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (name_i = 0; name_i < name_length; name_i++)
		_dog->name[name_i] = name[name_i];
	for (owner_i = 0; owner_i < owner_length; owner_i++)
		_dog->owner[owner_i] = owner[owner_i];
	_dog->name[name_i] = '\0';
	_dog->owner[owner_i] = '\0';
	_dog->age = age;
	return (_dog);
}
