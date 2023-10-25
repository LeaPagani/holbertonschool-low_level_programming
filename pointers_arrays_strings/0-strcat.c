#include "main.h"

/**
* _strcat - Function that concatenates two strings
* @src: String 1
* @dest: String 2
* Return: Pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
