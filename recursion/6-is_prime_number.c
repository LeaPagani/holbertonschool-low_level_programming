#include "main.h"

int real_prime_number(int n, int i);

/**
* is_prime_number - Function returns 1 if n is prime, otherwise returns 0
* @n: Int
* Return: 1 if n is prime, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - Find if n is prime
 * @n: Int
 * @i: Iterator
 * Return: 1 if n is prime, otherwise 0
 */
int real_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime_number(n, i - 1));
}
