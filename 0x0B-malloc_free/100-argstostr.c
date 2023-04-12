#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *s;
	int x, y, z, w = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		s = av[x];
		y = 0;

		while (s[y++])
			w++;
		w++;
	}

	ptr = (char *)malloc(sizeof(char) * (w + 1));
	if (ptr == NULL)
		return (NULL);

	for (x = 0, y = 0; x < ac && y < w; x++)
	{
		s = av[x];
		z = 0;

		while (s[z])
		{
			ptr[j] = s[z];
			z++;
			y++;
		}
		ptr[y++] = '\n';
	}
	ptr[y] = '\0';

	return (ptr);
}
