#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main - print the alphabeti in reverse
*
*Return: 0
*/
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar (c);
	putchar ('\n');

	return (0);

}
