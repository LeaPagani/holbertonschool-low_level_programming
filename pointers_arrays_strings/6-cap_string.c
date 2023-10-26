#include "main.h"

/**
* cap_string - Function that capitalizes all words of a string
* @str: String provided
* Return: str
*/
char *cap_string(char *str)
{
	char *ogstr = str;

	while (*str)
	{
		while (*str >= 'a' && *str <= 'z' && (*str - 1) == 32)
		{
		*str -= 32;
		}
		str++;
	}

	return (ogstr);
}
