#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Function that prints numbers
* @separator: Separator between numbers
* @n: Numbers of arguments
* Return: 0
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
