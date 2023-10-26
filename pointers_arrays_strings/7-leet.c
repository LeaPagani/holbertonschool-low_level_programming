#include "main.h"

/**
* leet - Function that encodes a string into 1337
* @str: String provided
* Return: str
*/
char *leet(char *str)
{
	char *ogstr = str;

	while (*str)
	{
		while ((*str >= 'a' && *str <= 'z') ||
			(*str >= 'A' && *str <= 'Z'))
		{
			'a' && 'A' = 4
			'e' && 'E' = 3
			'o' && 'O' = 0
			't' && 'T' = 7
			'l' && 'L' = 1
		}
	}

	return (ogstr);
}
