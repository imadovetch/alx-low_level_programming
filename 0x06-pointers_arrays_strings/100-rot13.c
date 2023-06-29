#include "main.h"

/**
 * rot13 - Applies the ROT13 substitution cipher to a string.
 *
 * @s: Pointer to the string to be transformed.
 *
 * Return: Pointer to the transformed string.
 */
char *rot13(char *s)
{
int i;
int j;
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
break;
}
}
}

return (s);
}

