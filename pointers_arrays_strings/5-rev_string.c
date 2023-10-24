#include "main.h"

/**
* rev_string - Function that reverses a string
* @s: String
*/
void rev_string(char *s)
{
	char *end = s;
	if (s)

	while (*end)
	{
		end++;
	}

	end--;

	while (s < end)
	{
		*s ^= *end;
		*end ^= *s;
		*s ^= *end;
		s++;
		end--;
	}
}
