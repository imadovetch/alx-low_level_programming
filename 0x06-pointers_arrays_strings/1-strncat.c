
#!/bin/bash
#include "main.h"

/**
 * _strncat - Concatenates two strings, taking only the first n characters from src.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to append from src.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* Finding the end of the destination string */
while (dest[i] != '\0')
i++;

/* Appending the source string to the destination string, limited to n characters */
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

/* Null-terminating the concatenated string */
dest[i] = '\0';

return (dest);
}
