#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
*main - print the alphabet except 'q' and 'e'
*
*Return: 0
*/
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
		putchar (c);
	putchar ('\n');

	return (0);

}
