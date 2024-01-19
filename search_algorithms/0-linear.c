#include "search_algos.h"

/**
  * linear_search - Searches value in array using linear search.
  * @array: Pointer to first element of array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If value or array is NULL, -1.
  *         Otherwise, the first index where value is located.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
