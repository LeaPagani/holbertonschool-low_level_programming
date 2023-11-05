#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that multiplies two numbers
* @argc: Argument count
* @argv: Arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int pointer, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (pointer = 1; pointer < argc; pointer++)
		mul *= atoi(argv[pointer]);
	printf("%d\n", mul);
	return (0);
}
