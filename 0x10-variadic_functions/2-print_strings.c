#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;
	char *str;

	va_start(ptr, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(ptr, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
