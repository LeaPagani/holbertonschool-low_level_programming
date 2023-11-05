#include <stdio.h>

/**
* main - Program that prints all arguments it receives
* @argc: Argument count
* @argv: Arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int charcount;

	for (charcount = 0; charcount < argc; charcount++)
	{
		printf("%s\n", argv[charcount]);
	}

	return (0);
}
