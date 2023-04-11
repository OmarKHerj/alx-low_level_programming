#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ptr;
	int x, y = 0;

	if (str == NULL)
		return (NULL);

	while (str[y] != '\0')
		y++;

	ptr = (char *)malloc((sizeof(char) * y) + 1);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		ptr[x] = str[x];
	ptr[y] = '\0';

	return (ptr);
}
