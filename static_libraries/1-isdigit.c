#include "main.h"
/* more headers goes there */

/**
*_isdigit - Write a function that checks for a digit
*@c: number to check
*Return: 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (c = 1);
	}
	else
	{
		return (0);
	}
}
