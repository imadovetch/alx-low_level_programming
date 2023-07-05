#include "main.h"
/**
 * factorial - Calculates the factorial of a number recursively.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number, or -1 for invalid input.
 */
int factorial(int n)
{
	int result;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	result = n;
	result *= factorial(n - 1);
	return (result);
}

