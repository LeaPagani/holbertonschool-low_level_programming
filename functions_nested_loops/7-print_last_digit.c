#include "main.h"
/* more headers goes there */

/**
*print_last_digit - Write a function that prints the last digit of a number
*@x: Number to check
*Return: 0
*/
int print_last_digit(int x)
{
	int l;
	int d;

	l = x % 10;
	if (l >= 0)
	{
		d = l;
		_putchar (d + '0');
	}
	else
	{
		d = l * (-1);
		_putchar (d + '0');
	}

	return (d);
}
