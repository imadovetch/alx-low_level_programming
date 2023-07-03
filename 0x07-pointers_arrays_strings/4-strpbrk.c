#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the bytes to match
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

