#include<stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 0; x < 26; x++)
{
putchar(alpha[x]);
}
putchar('\n');
return (0);
}
