#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)

{

	int x, y;

	for (y = n - 1; y >= n / 2; y--)
	{
	x = a[n - 1 - y];
	a[n - 1 - y] = a[y];
	a[y] = x;
	}
}
