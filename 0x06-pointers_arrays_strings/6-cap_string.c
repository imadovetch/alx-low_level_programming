#!/bin/bash
#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 *
 * @s: Pointer to the string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i, j;

char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;

for (j = 0; j < 13; j++)
{
if (s[i] == spe[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
}
}
}

return (s);
}

