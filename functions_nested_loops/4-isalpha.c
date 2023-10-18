#include "main.h"
/* more headers goes there */

/**
*_isalpha - Write a function that checks for alphabetic character
*@c: Letter to check
*Return: 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c = 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c = 1);
	}
	else
		return (0);
}
