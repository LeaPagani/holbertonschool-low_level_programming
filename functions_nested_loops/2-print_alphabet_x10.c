#include "main.h"
/* more headers goes there */

/**
*print_alphabet_x10 - Write a function that prints the alphabet 10 times
*Return: 0
*/
void print_alphabet_x10(void)
{
	int c;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
	_putchar ('\n');
	}

}
