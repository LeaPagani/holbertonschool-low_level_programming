#include "main.h"

/**
* leet - Function that encodes a string into 1337
* @str: String provided
* Return: str
*/
char *leet(char *str)
{
	int charcount1, charcount2;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	charcount1 = 0;
	while (str[charcount1])
	{
		charcount2 = 0;
		while (letters[charcount2])
		{
			if (str[charcount1] == letters[charcount2])
			{
				str[charcount1] = numbers[charcount2];
			}
			charcount2++;
		}
		charcount1++;
	}
	return (str);
}
