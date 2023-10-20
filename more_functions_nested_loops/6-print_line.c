#include "main.h"
/* more headers goes there */

/**
*print_line - Write a function that draws a straight line in the terminal
*@n: Number to translate
*Return: 0
*/
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
