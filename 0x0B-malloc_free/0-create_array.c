#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storage char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
