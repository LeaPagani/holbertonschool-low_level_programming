#include "main.h"

/**
* puts2 - Function that prints half of the chars in a string
* @str: String
*/
void puts2(char *str)
{
	if (*str)
	{
		_putchar(*str);
		while (*str && *(str + 1))
		{
			_putchar(*(str += 2));
		}
	}

	_putchar('\n');
}
