#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number recursively.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (checker(n, n - 1));
}

/**
 * checker - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @x: The current divisor being checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int checker(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}

	if (n % x == 0)
	{
		return (0);
	}

	return (checker(n, x - 1));
}

