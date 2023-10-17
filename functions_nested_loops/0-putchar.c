#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
*main - Write a program that prints _putchar, followed by a new line
*
*Return: 0
*/
int main(void)
{
	int i;
	char text[10] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar ('\n');

	return (0);
}
