#include "main.h"

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, numar = 0, x = 0, p = 0, in_word = 0, size = 0;
	char **array;

	while (str[size] != '\0')
	{
		if (str[size] != ' ')
			size++;
		size++;	}
	array = malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = malloc(sizeof(char) * (size + 1));
		if (array[i] == NULL)
			return (NULL); }
	for (; str[numar] != '\0'; numar++)
	{
		if (str[numar] != ' ' && in_word == 0)
		{
			in_word = 1;
			array[x][p] = str[numar];
			p++; }
		else if (str[numar] != ' ' && in_word == 1)
		{
			array[x][p] = str[numar];
			p++; }
		else if (str[numar] == ' ' && in_word == 1)
		{
			in_word = 0;
			array[x][p] = '\0';
			x++;
			p = 0; } }
	if (p == 0)
		array[x] = NULL;
	else
	{
		array[x][p] = '\0';
		array[x + 1] = NULL; }
		return (array); }
