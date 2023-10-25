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
	int charcount;

	charcount = 0;
	while (charcount < n && *(src + charcount))
	{
		*(dest + charcount) = *(src + charcount);
		charcount++;
	}
	while (charcount < n)
	{
		*(dest + charcount) = '\0';
		charcount++;
	}
	return (dest);
}
