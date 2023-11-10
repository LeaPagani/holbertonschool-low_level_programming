#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Concatenate two strings with allocated memory
* @s1: String 1
* @s2: String 2
* Return: Duplicated array or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1, len2;
	unsigned int i, i2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (i2 = 0; i2 < len2; i2++)
	{
		concatenated[i] = s2[i2];
		i++;
	}

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
