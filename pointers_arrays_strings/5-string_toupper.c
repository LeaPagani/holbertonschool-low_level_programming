#include "main.h"

/**
* string_toupper - Function that changes all lowercase letters to uppercase
* @char: String provided
* Return: char
*/
char *string_toupper(char *)
{
	char *ogchar = str;

	while (*char)
	{
		if (*char >= 'a' && *char <= 'z')
		{
		*char -= 32
		}
		*char++;
	}

	return (ogchar);
}
