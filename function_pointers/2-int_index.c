#include "function_pointers.h"
/**
* int_index - Function that searches for an integer
* @array: Array
* @size: Number of elements in array
* @cmp: Pointer a function
* Return: Index of integer or -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int array_iterator;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (array_iterator = 0; array_iterator < size; array_iterator++)
	{
		if (cmp(array[array_iterator]))
			return (array_iterator);
	}
	return (-1);
}
