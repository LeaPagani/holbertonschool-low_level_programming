#include <stdio.h>

/**
* main - Program that prints the number of arguments
* @argc: Argument count
* @argv: Arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
