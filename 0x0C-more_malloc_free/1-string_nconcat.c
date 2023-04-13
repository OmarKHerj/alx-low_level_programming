#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
  char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x, y, z, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	if (n > y)
		n = y;

	z = x + n;

	ptr = malloc(z + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < z; i++)
		if (i < x)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - x];

	ptr[i] = '\0';

	return (ptr);
}
