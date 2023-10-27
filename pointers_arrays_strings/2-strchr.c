#include <stddef.h>
#include "main.h"

/**
* _strchr - Function that locates a character in a string
* @s: String
* @c: Char to be located
* Return: Pointer to first occurrence of c or NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (s);
}
