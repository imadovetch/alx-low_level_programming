#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: The string for which to find the length.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
