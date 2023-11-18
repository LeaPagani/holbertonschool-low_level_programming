#include "function_pointers.h"
/**
* array_iterator - Execute a function on each element of an array
* @array: Array of integer
* @size: Size of array
* @action: Pointer to a function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
