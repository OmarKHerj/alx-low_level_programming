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
	unsigned int x, y, z, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	ptr = malloc(sizeof(char) * (x + y + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		ptr[z] = s1[z];

	len = y;
	for (y = 0; y <= len; z++, y++)
		ptr[z] = s2[y];

	return (ptr);
}
