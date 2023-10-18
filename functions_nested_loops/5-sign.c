#include "main.h"
/* more headers goes there */

/**
*print_sign - Write a function that prints the sign of a number
*@n: Number to check
*Return: 0
*/
int print_sign(int n)
{
	if (n >= 1)
	{
		n = 1;
		_putchar ('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar ('0');
	}
	else if (n < 0)
	{
		n = -1;
		_putchar ('-');
	}
	return (n);
}
