#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: The index of the first element for which the comparison function
 *         does not return 0. If no element matches or size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	if (cmp != NULL)
	{
		for (; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
	return (-1);
}
