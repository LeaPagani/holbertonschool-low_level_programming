#include "main.h"
/* more headers goes there */

/**
*print_triangle - Function that draws a triangle on the terminal
*@size: Size of triangle
*Return: 0
*/
void print_triangle(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
		_putchar(35);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
