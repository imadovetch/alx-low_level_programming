#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Finding the end of the destination string */
	while (dest[i] != '\0')
		i++;

	/* Appending the source string to the destination string */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminating the concatenated string */
	dest[i] = '\0';

	return (dest);
}
