#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main - print the alphabet lowercase and uppercase
*
*Return: 0
*/
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar (c);
	putchar ('\n');

	return (0);

}
