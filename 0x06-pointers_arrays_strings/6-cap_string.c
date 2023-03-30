#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int x = 0, i;
	int y = 13;
	char str[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		i = 0;

		while (i < y)
		{
			if ((x == 0 || s[x - 1] == str[i]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;

			i++;
		}

		x++;
	}

	return (s);
}
