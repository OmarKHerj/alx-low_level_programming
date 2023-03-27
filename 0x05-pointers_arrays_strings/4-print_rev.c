#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (c -= 1; c >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
