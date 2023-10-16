#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main - Determine if a number is positive or negatative
*
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* Check if n is positive */
	if (n > 0)
		printf("%d is positive\n", n);
    /* Check if n is negative */
	else if (n < 0)
		printf("%d is negative\n", n);
    /* Check if n is zero */
	else
		printf("%d is zero\n", n);
	return (0);
}

