#include "main.h"
/* more headers goes there */

/**
*times_table - Write a function that prints the the 9 times table
*Return: 0
*/
void times_table(void)
{
	int c;
	int r;
	int mult;
	int fd;
	int ld;

	for (c = 0; c <= 9; c++)
	{
		for (r = 0; r <= 9; r++)
		{
			mult = c * r;
			fd = mult / 10;
			ld = mult % 10;
			if (r < 1)
			_putchar(ld + '0');
			else
			{
				if (mult <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(ld + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(fd + '0');
					_putchar(ld + '0');
				}
			}
		}
		_putchar('\n');
	}
}
