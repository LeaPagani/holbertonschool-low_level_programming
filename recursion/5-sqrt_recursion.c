#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - Function that returns the square root of n
* @n: Int
* Return: Square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - Find the square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: Square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
