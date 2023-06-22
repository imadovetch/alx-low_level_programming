#include "main.h"

/**
 * _isdigit - check if char isbetween 0-9
 * @c: is the char to be checked
 * Return: 1 if char is in 0-9, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >=48 && c <= 57)
		return (1);
	else
		return (0);
}
