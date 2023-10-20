#include "main.h"
/* more headers goes there */
/**
*more_numbers - Function that prints 10 times the numbers, from 0 to 14
*Return: 0
*/
void more_numbers(void)
{
	int times;
	int num;
	int fd;
	int ld;

	for (times = '0'; times < '11'; times++)
	{
		for (num = '0'; num < '15'; num++)
		{
			fd = num / 10;
			ld = num % 10;
			if (num > 9)
			{
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
		}
		_putchar('\n');
	}
}
