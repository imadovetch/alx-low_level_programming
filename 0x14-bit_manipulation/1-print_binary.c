#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
		int bit_position;
		unsigned long int current_bit;
		int found_one = 0;

		for (bit_position = 63; bit_position >= 0; bit_position--)
		{
				current_bit = num >> bit_position;

				if (current_bit & 1)
				{
						_putchar('1');
						found_one = 1;
				}
				else if (found_one)
						_putchar('0');
		}
		if (!found_one)
				_putchar('0');
}
