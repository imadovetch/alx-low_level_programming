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
    va_start(ap, n);

    for (unsigned int i = 0; i < n; i++)
    {
        const char *str = va_arg(ap, const char *);
        if (str)
            printf("%s", str);

        if (i < n - 1 && separator)
            printf("%s", separator);
    }
    printf("\n");

    va_end(ap);
}
