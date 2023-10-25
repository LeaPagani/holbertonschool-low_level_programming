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
	char *pointer = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (pointer);
}
