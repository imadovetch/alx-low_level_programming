#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given separator.
 *
 * @separator: Pointer to the separator string.
 * @n: The number of integers to be printed.
 * @...: Variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}