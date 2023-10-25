#include "main.h"

/**
* _strncat - Function that concatenates two strings
* @src: String 1
* @dest: String 2
* @n: Number of bytes
* Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ogdest = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ogdest);
}
