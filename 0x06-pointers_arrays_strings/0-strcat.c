#include "MAIN.h"
/**
 * main - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: return to dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x])
	{
		x++;
	}
	for (y = 0; src[y] != 0; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}