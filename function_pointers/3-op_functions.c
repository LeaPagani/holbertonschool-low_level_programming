#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add function
 * @a: First integer
 * @b: Second integer
 * Return: Sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract function
 * @a: First integer
 * @b: Second integer
 * Return: Subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication function
 * @a: First integer
 * @b: Second integer
 * Return: Multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: First integer
 * @b: Second integer
 * Return: Division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo function
 * @a: First integer
 * @b: Second integer
 * Return: Modulo result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
