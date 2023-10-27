#include "main.h"

/**
* _memcpy - Function that copies memory area
* @src: Source memory
* @dest: Destination memory
* @n: Number of bytes
* Return: Pointer to the destination memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int charcount;

	for (charcount = 0; charcount < n; charcount++)
		dest[charcount] = src[charcount];

	return (dest);
}
