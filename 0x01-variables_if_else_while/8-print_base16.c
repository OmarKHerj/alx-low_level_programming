#include<stdio.h>
/**
 * main - Prints numbers and alphabetics like this 0123456789 and abcdef.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;
for (x = 48; x < 58; x++)
{
putchar(x);
}
for (y = 97; y < 103; x++)
{
putchar(y);
}
putchar('\n');
return (0);
}
