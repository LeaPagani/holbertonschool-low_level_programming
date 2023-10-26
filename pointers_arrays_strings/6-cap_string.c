#include "main.h"

/**
* cap_string - Function that capitalizes all words of a string
* @str: String provided
* Return: str
*/
char *cap_string(char *str)
{
	char *ogstr = str;
	int capnext = 1;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' && capnext)
		{
			*str -= 32;
			capnext = 0;
		}

		if (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == ',' || *str == ';' || *str == '.' ||
			*str == '!' || *str == '?' || *str == '"' ||
			*str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
		{
			capnext = 1;
		}

		str++;
	}


	return (ogstr);
}
