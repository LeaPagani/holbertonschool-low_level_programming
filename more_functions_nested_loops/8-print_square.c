#include "main.h"
/* more headers goes there */

/**
*print_square - Function that draws a square on the terminal
*@size: Size of the square
*Return: 0
*/
void print_square(int size)
{
	int alto;
	int ancho;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (alto = 1; alto <= size; alto++)
		{
			for (ancho = 1; ancho <= size; ancho++)
				_putchar('#');
		}
	_putchar('\n');
	
}
