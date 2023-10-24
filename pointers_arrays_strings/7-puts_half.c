#include "main.h"

/**
* puts_half - Function that prints half of a string
* @str: String
*/
void puts_half(char *str)
{
	char *end = str;

	if (*str)

	while (*end)
	{
		end++;
	}

	end--;

	{
		while (*str >= *(end) / 2)
			_putchar(*str);
	}
	_putchar('\n');
}
