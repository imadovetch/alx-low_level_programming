#include "main.h"

/**
 * leet - Converts characters in a string to leet speak.
 *
 * @s: Pointer to the string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
int i, j;

char *a = "aAeEoOtTlL";
char *b = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
}
}
}

return (s);
}

