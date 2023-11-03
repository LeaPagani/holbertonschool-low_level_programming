#include "main.h"

/**
* _strcpy - Function that copies a string
* @dest: Destination string where the copy will be placed
* @src: Source string that will be copied
* Return: A pointer to the destination string `dest`
*/
char *_strcpy(char *dest, char *src)
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
