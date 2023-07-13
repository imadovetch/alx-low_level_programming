#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements to be allocated
 * @size: size of each element
 *
 * Return: pointer to the allocated chunk of memory
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int iter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = (void *)malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (iter = 0; iter < nmemb * size; ++iter)
		((char *)(mem))[iter] = 0x0;

	return (mem);
}

