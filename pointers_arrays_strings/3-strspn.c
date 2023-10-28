#include "main.h"

/**
* _strspn - Function that gets the length of a prefix substring
* @s: String 1
* @accept: String 2
* Return: Length in number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int strIndex = 0;
	unsigned int acceptedChars = 0;

	while (s[strIndex] != '\0')
	{
		unsigned int acceptIndex = 0;
		unsigned int charAccepted = 0;

		while (accept[acceptIndex] != '\0')
		{
			if (s[strIndex] != accept[acceptIndex])
			{
				acceptIndex++;
			}
			else if (s[strIndex] == accept[acceptIndex])
			{
				charAccepted = 1;
				acceptedChars++;
				acceptIndex++;
			}
		}
		if (charAccepted == 0)
		{
			return acceptedChars;
		}
		strIndex++;
	}
	return acceptedChars;
}
