#include <stdio.h>
/* more headers goes there */

/**
*main - Function that print numbers from 1 - 100,
*changing multiples of 5 to 'Buzz' and multiples of 3 to Fizz
*Return: 0
*/
int main(void)
{
	int num;
	int mult_3;
	int mult_5;

	for (num = 1; num <= 100; num++)
	{
		if (num < 100)
		{
			mult_3 = num % 3;
			mult_5 = num % 5;
			if (mult_3 == 0 && mult_5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (mult_3 == 0)
			{
				printf("Fizz ");
			}
			else if (mult_5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", num);
			}
		}
		else
			printf("Buzz");
	}
	putchar('\n');
	return (0);
}
