#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int x, y;
for (x = 0;x <= 10;x++)
{
for (y = 97;y <= 122;y++)
{
_putchar(y);
}
_putchar('\n');
}
}
