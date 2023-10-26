#include "main.h"

/**
* string_toupper - Function that changes all lowercase letters of a string to uppercase
* @char: String provided
* Return: char
*/
char *string_toupper(char *)
{
	while (*char)
	{
		if (char >= 'a' && char <= 'z')
		*char -= 32

		*char++;
	}

	return (char);
}
