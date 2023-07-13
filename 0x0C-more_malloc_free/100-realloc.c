#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of the allocated space for ptr, in bytes
 * @new_size: new size of the memory block, in bytes
 *
 * Return: pointer to the reallocated memory block
 *         NULL if new_size is zero and ptr is not NULL, or if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return ptr;

	if (ptr == NULL)
		return malloc(new_size);

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return NULL;

	unsigned int min_size = (old_size < new_size) ? old_size : new_size;
	unsigned char *src = (unsigned char *)ptr;
	unsigned char *dest = (unsigned char *)new_ptr;

	for (unsigned int i = 0; i < min_size; i++)
	{
		dest[i] = src[i];
	}

	free(ptr);

	return new_ptr;
}

