#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
*print_to_98 - Function that prints all natural numbers from n to 98
*@n: Number to check
*Return: 0
*/
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			printf("%d", x);
			else
			printf("%d, ", x);
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			printf("%d", x);
			else
			printf("%d, ", x);
		}
		putchar('\n');
	}
	else
	{
		printf("%d\n", n);
	}
}
