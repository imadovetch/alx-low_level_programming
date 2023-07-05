#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number recursively.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of the number, or -1 if the number is negative or
 *         if the square root is not a whole number.
 */
int _sqrt_recursion(int n)
{
	return (helper_sqrt(n, 1));
}

/**
 * helper_sqrt - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @i: The current number being checked.
 *
 * Return: The square root of the number, or -1 if the number is negative or
 *         if the square root is not a whole number.
 */
int helper_sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}

	return (helper_sqrt(n, i + 1));
}

