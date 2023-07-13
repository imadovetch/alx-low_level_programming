#include "main.f=h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return NULL;

	memset(ptr, 0, total_size);

	return ptr;
}

