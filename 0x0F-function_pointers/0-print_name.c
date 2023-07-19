#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char pointer 
 *
 * Description: This function calls the provided function 
 * If the name or the function pointer is NULL, nothing is done.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);git add . 
}