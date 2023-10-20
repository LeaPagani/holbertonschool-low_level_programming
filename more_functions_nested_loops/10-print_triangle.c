#include "main.h"
/* more headers goes there */

/**
*print_triangle - Function that draws a triangle on the terminal
*@size: Size of triangle
*Return: 0
*/
void print_triangle(int size)
{
	int row;
	int spaces;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
		{
		for (spaces = 1; spaces <= size - row; spaces++)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
