#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a given separator.
 *
 * @separator: Pointer to the separator string.
 * @n: The number of strings to be printed.
 * @...: Variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(ap, const char *);
		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
