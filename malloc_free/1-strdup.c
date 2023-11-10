#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Function creates array of chars with a specific char
* @size: Size of the array
* @c: Specified char
* Return: Array or NULL
*/
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;
	unsigned int i;

	length = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	while (i < length)
	{
		duplicate[i] = str[i];
		i++;
	}

	duplicate[i] = '\0';

	return (duplicate);
}
