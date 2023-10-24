/*
 * File: 4-print_rev.c
 * Auth: Leandro Pagani
 */

#include "main.h"

/**
* print_rev - Function that prints a string in reverse followed by a new line
* @s: String
* Return: 0
*/
void print_rev(char *s)
{
	while (*s)
		s++;

	s--;

	while (*s)
		_putchar(*s);
		s--;

	_putchar('\n');
}
