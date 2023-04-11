#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
 char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int x, y, k, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
    for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;
    k = x + y;
	s = malloc((sizeof(char) * l) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (k = 0; k < x; k++)
		ptr[k] = s1[k];

	len = y;
	for (y = 0; y <= len; k++, y++)
		ptr[k] = s2[y];

	return (ptr);
}
