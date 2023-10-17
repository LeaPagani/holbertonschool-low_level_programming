#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main - print the alphabet
*
*Return: 0
*/
int main(void)
{
	int c;

	for (char c = 'a'; c <= 'z'; c++)
		putchar (c);
	putchar ('\n');

	return (0);

}
