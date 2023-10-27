#include "main.h"

/**
* _strspn - Function that gets the length of a prefix substring
* @s: String 1
* @accept: String 2
* Return: Length in number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int bytes = 0;

	while (*s && *accept)
	{
		if (*s == *accept)
		{
			bytes++;
			s++;
		}
		else
		{
			accept++;
		}
	}
	return (bytes);
}
