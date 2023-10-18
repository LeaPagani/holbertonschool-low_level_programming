#include "main.h"
/* more headers goes there */

/**
*_abs - Write a function that computes the absolute value of an integer
*@x: Number to check
*Return: 0
*/
int _abs(int x)
{
	int abs;

	if (x >= 0)
	{
		abs = x;
	}
	else
	{
		abs = -x;
	}
	return (abs);
}
