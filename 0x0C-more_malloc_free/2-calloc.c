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
void *_calloc(unsigned int nmemb, unsigned int size){
    char  *ptr;
    ptr = calloc(nmemb,size);
    if (ptr == '\0' || size == 0 || nmemb == 0)
        return NULL;
    return ptr ;
}
