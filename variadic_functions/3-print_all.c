#include "variadic_functions.h"
/**
 * print_all - Function that prints everything
 * @format: Type of argument
 */
void print_all(const char * const format, ...)
{
	va_list object;
	int i = 0;
	char  *s;

	va_start(object, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(object, int));
				break;
			case 'i':
				printf("%d", va_arg(object, int));
				break;
			case 'f':
				printf("%f", va_arg(object, double));
				break;
			case 's':
				s = va_arg(object, char *);
				s ? printf("%s", s) : printf("(nil)");
				break;
			}
			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
						|| format[i] == 's') && format[i + 1])
			{
				printf(", ");
			}
			i++;
		}
		va_end(object);
	}
		printf("\n");
}
