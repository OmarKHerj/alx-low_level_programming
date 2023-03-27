#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: input string
 * Return: no return
 */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char rev;

	while (s[y++])
	{
		x++;
	}
	for (y = x - 1; y >= x / 2; y--)
	{
		rev =  s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] - rev;
	}
}
