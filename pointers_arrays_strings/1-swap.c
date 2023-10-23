/*
 * File: 1-swap.c
 * Auth: Leandro Pagani
 */

#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: The pointer to an int
 * @b: The pointer to an int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
