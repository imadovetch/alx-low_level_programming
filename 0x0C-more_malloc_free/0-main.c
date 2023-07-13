#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate to s1
 *
 * Return: pointer to the newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated. If the function
 * fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int len1, x = 0;

    len1 = strlen(s1);
    ptr = malloc(len1 + n + 1);
    if (ptr == NULL)
        return NULL;
    if (n >= strlen(s2))
        n = strlen(s2);
    for (; s1[x] != '\0'; x++)
    {
        ptr[x] = s1[x];
    }
    x = 0;
    for (; x <= n; x++)
        ptr[x + len1] = s2[x];
    ptr[x + len1] = '\0';  // Ensure the new string is null-terminated
    return ptr;
}

