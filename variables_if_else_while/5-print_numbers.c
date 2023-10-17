#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main - print all single digit numbers
*
*Return: 0
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar (c);
	putchar ('\n');

	return (0);

}
