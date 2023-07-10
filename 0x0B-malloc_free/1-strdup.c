#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ptr = malloc(i + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';

	return (ptr);
}
