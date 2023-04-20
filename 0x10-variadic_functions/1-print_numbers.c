#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list apr;
	unsigned int x;

	va_start(apr, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(apr, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(apr);
}
