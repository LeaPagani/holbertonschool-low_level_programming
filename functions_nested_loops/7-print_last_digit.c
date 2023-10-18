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

	l = x % 10;
	if (l >= 0)
	{
		_putchar (l + '0');
	}
	else
	{
		_putchar (l * -1 + '0');
	}

	return (l);
}
