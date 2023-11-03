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
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
