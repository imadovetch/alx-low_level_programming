#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if(x == 52 || x==50)
			continue ;
		_putchar(x);
	}
	_putchar('\n');
}

