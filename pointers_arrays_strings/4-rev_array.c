#include "main.h"

/**
* reverse_array - Function that reverses the content of an array of integers
* @a: Array of integers
* @n: Number of elements of the array
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int tmpav;
/* Temporary array value */

	int poa;
/* Pointer of array */

	for (poa = n - 1; poa >= n / 2; poa--)
	{
		tmpav = a[n - 1 - poa];
		a[n - 1 - poa] = a[poa];
		a[poa] = tmpav;
	}
}
