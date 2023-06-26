#include "main.h"

/**
 * puts2 - check the code
 * @str: the string
 * Return: nothing void
 */
void puts2(char *str)
{
	while (*str != '\0')
		{
		_putchar(*str++);
		str++;
		}
	_putchar('\n');
}
