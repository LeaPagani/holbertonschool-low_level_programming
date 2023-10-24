/*
 * File: 3-puts.c
 * Auth: Leandro Pagani
 */

#include "main.h"

/**
* _puts - Function that prints a string followed by a new line
* @str: String
* Return: 0
*/
void _puts(char *str)
{
	int length = 0;
	char letter = str[length];

	while (str[length] != '\0')
	{
		_putchar(letter);
		length++;
	}
	_putchar('\n');
}
