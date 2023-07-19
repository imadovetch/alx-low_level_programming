#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a given function on each element of an array
 * @array: The array to iterate through
 * @size: The size of the array
 * @action: Pointer to the function to be executed on each array element
 *
 * Description: This function iterates through the array and applies the
 * provided function to each element. If the array is NULL, the size is 0,
 * or the action function is NULL, nothing is done.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (; x < size; x++)
			action(array[x]);
	}
}
