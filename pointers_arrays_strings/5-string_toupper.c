#include "main.h"

/**
* string_toupper - Function that changes all lowercase letters to uppercase
* @str: String provided
* Return: char
*/
char *string_toupper(*str)
{
	char *ogstr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}

	return (ogstr);
}
