#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int x = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
}	
