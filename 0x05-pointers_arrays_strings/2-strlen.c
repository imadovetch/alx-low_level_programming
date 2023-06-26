#include "main.h"
#include <stdio.h>

/**
 * _strlen - count the size
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int lenght;

	for (s = 0 ; s != \0; s++)
	{
		lenght++;
	}
	return (lenght);
}

