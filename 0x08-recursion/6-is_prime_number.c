#include "main.h"
/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @x: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int check_prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (check_prime(n, x + 1));
}
/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
