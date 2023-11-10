#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Function that concatenates two strings
* @s1: String 1
* @s2: String 2
* @n: Unsigned int
* Return: Pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, i2, i3;
	char *p;

	i = 0;
	i2 = 0;
	i3 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);
	while (s1[i2])
	{
		p[i2] = s1[i2];
		i2++;
	}

	while (i3 < n)
	{
		p[i2 + i3] = s2[i3];
		i3++;
	}
	p[i2 + i3] = '\0';
	return (p);
}
