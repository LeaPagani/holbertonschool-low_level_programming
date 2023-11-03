#include "main.h"
/* more headers goes there */

/**
*_isupper - Write a function that checks for uppercase character
*@c: Letter to check
*Return: 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c = 1);
	}
	else
	{
		return (0);
	}
}
