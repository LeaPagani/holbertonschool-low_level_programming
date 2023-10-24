#include "main.h"

/**
* print_rev - Function that prints a string in reverse followed by a new line
* @s: String
*/
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}

	s--;

	while (*s)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
