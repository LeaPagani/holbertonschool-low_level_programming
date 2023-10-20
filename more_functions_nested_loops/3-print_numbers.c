#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
*print_numbers - Write a function that prints the numbers, from 0 to 9
*Return: 0
*/
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
