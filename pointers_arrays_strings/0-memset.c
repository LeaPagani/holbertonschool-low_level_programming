#include "main.h"

/**
* _memset - Function that fills memory with a constant byte
* @s: Pointer to the memory area to be filled
* @n: Number of bytes
* @b: Fill the memory area with this constant byte
*
* Return: Pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
