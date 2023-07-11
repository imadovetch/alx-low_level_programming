#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates command-line arguments into a single string
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: A dynamically allocated string containing the concatenated,
 *         with each argument separated by a newline character '\n',
 *         or NULL if memory allocation fails.
 */
char *argstostr(int argc, char **argv)
{

	int c, h, i, g;
	char *str;
	int index = 0;

	if (argc == 0)
		return (NULL);
	for (h = 0; h < argc; h++)
	{
		for (g = 0; argv[h][g] != '\0'; g++)
		{
			c++;
		}
		c++;
	}

	str = malloc(sizeof(char) * (c + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < argc; i++)
	{
		for (g = 0; argv[i][g] != '\0'; g++)
		{
			str[index] = argv[i][g];
			index++;
		}
		str[index] = '\n';
		index++;
	}

	str[index] = '\0';
	return (str);
}

