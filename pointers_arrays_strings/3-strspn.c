#include "main.h"

/**
* _strspn - Function that gets the length of a prefix substring
* @s: String 1
* @accept: String 2
* Return: Length in number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
    unsigned int bytes = 0;

	while (*s)
	{
		char *temp = accept;
		int found = 0;

		while (*temp)
		{
			if (*s == *temp)
			{
				found = 1;
				break;
			}
			temp++;
		}
		if (found)
		{
			bytes++;
			s++;
		}
		else
		{
		break;
		}
	}
	return bytes;
}
