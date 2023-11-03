#include "main.h"
/* more headers goes there */

/**
*_islower - Write a function that checks for lowercase character
*@c: Letter to check
*Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c = 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c = 0);
	}
	else
		return (0);
}
