#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: ");
	putchar(sizeof(char));
	printf("\nSize of an int: ");
	putchar(sizeof(int));
	printf("\nSize of long int: ");
	putchar(sizeof(long int));
	printf("\nSize of long long int: ");
	putchar(sizeof(long long int));
	printf("\nSize of float: ");
	putchar(sizeof(float));
	return (0);
}
