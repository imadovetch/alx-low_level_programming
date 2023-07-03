#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *i != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
