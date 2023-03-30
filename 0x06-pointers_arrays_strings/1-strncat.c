#include "main.h"
/**
* _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)

{

	int x = 0, y = 0;

	while (dest[x++])
	y++;
	for (x = 0; src[x] && x < n; x++)
	dest[y++] = src[x];
	return (dest);
}
