#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Function creates array of chars with a specific char
* @size: Size of the array
* @c: Specified char
* Return: Array or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int charcount;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (charcount = 0; charcount < size; charcount++)
		str[charcount] = c;

	return (str);
}
