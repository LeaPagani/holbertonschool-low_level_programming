#include "main.h"

/**
* _strncpy - Function that copies a string
* @src: String 1
* @dest: String 2
* @n: Number of bytes
* Return: Pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ogdest = dest;

	if (n <= 0)
	{
		return (dest);
	}

	else
	{
		while (*src && n > 0)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		*dest = '\0';

		return (ogdest);
	}
}
