#include "main.h"
/* more headers goes there */

/**
*print_diagonal - Function that draws a diagonal line on the terminal
*@n: Number of '\' characters
*Return: 0
*/
void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		for (x = 0; x < i; x++)
			_putchar(' ');
		}
	_putchar(98);
	}
	_putchar('\n');
}

