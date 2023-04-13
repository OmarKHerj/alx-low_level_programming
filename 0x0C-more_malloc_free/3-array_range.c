#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
}int *array_range(int min, int max)
{
	int *ptr;
	int x;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		ptr[x] = min;

	return (ptr);
}
