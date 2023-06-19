#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a String to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes - s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}

	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}

	if (n < len2)
		len2 = n;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		s[x] = s1[x];

	for (y = 0; y < len2; y++)
		s[x + y] = s2[y];

	s[x + y] = '\0';

	return (s);
}
