#include <stddef.h>
#include "main.h"

/**
* _strpbrk - Function that searches string for bytes
* @s: String
* @accept: String
* Return: Pointer to byte in s that matches byte in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int charcount;

	while (*s)
	{
		for (charcount = 0; accept[charcount]; charcount++)
		{
			if (*s == accept[charcount])
			{
				return (s);
			}
		}
	s++;
	}
	return (NULL);
}
