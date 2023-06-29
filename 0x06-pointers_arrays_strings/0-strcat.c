#!/bin/bash
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
README.md int i = 0, j = 0;

README.md /* Finding the end of the destination string */
README.md while (dest[i] != '\0')
README.md README.md i++;

README.md /* Appending the source string to the destination string */
README.md while (src[j] != '\0')
README.md {
README.md README.md dest[i] = src[j];
README.md README.md i++;
README.md README.md j++;
README.md }

README.md /* Null-terminating the concatenated string */
README.md dest[i] = '\0';

README.md return (dest);
}
