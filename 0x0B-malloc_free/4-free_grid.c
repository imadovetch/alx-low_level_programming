#include "main.h"

/**
 * free_grid - Allocates a 2D array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to the allocated grid, or NULL if malloc fails
 */
void free_grid(int **grid, int height)
{
	int **array;
	int i, j;

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL); /* return NULL if malloc failed */
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			/* free already allocated memory if malloc failed */
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}

