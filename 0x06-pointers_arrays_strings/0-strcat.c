#include "MAIN.h"
#include <stdio.h>
/**
 * main - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: return to string dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
