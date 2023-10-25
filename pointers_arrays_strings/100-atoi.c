#include "main.h"

/**
* _atoi - Function that convert a string to an integer
* @s: String
* Return: Int value
*/
int _atoi(char *s)
{
	int pointer, value, pn;

	pointer = value = 0;

	pn = 1;

	while ((s[pointer] < '0' || s[pointer] > '9') && (s[pointer] != '\0'))
	{
		if (s[pointer] == '-')
		{
			pn *= -1;
			pointer++;
		}
		else
		{
			pointer++;
		}
	}

	if ((s[pointer] >= '0') && (s[pointer] <= '9'))
	{
		while ((s[pointer] >= '0') && (s[pointer] <= '9'))
		{
			value = (value * 10) + ((s[pointer]) - '0');
			pointer++;
		}
	}


	value = value * pn;

	return (value);
}
