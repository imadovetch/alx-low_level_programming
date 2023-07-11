#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words) or NULL if str is NULL
 *         or str is empty or if the function fails
 */
char **strtow(char *str)
{
    int i = 0, num_words = 0, start = -1, end;
    char **array;

    if (str == NULL || str[0] == '\0')
        return (NULL);
    while (str[i])
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            if (str[i + 1] == ' ' || str[i + 1] == '\0')
                num_words++;
        }
        i++; 
    }

    array = malloc(sizeof(char *) * (num_words + 1));
    if (array == NULL)
        return (NULL);

    for (i = num_words = 0; str[i]; i++)
    {
        if (str[i] != ' ' && start < 0)
            start = i;
        if ((str[i] == ' ' || str[i + 1] == '\0') && start >= 0)
        {
            end = i;
            array[num_words] = malloc(sizeof(char) * (end - start + 2));
            if (array[num_words] == NULL)
                return (NULL);
            array[num_words] = strncpy(array[num_words], &str[start], end - start + 1);
            array[num_words][end - start + 1] = '\0';
            num_words++;
            start = -1; 
        } 
    }

    array[num_words] = NULL;
    return (array); 
}

