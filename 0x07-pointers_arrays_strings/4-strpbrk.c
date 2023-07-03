#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s
 * Return: the number of characters in the initial segment of s
 * which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

