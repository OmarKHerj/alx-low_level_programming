#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers, followed by a new line.
 * @a: array input
 * @n: input number element
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int x;
	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
