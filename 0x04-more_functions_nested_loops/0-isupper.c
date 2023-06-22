#include "main.h"

/**
 * _isupper - check if char is uppercase
 * 
 * Return: 1 if char is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

