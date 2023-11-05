#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Program that adds positive numbers
* @argc: Argument count
* @argv: Arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int sum, iarg, inum;

	sum = 0;
	for (iarg = 1; iarg < argc; iarg++)
	{
		for (inum = 0; argv[iarg][inum] != '\0'; inum++)
		{
			if (!isdigit(argv[iarg][inum]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[iarg]);
	}
	printf("%d\n", sum);
	return (0);
}
