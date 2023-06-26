#include "main.h"
/**
 * swap_int - it change the value of two variables
 * and updates the value it points
 * @a: input
 * @b: input
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int f = *a;
	*a = *b;
	*b = f;
}

