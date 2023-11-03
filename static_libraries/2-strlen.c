/*
 * File: 2-strlen.c
 * Auth: Leandro Pagani
 */

#include "main.h"

/**
* _strlen - Function that returns the length of a string
* @s: String
* Return: length
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return (length);
}
