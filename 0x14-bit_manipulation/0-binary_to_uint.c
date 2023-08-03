#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b) {
    unsigned int sum = 0;
    int i = 0;

    while (b[i]) {
        if (b[i] != '0' && b[i] != '1')
            return 0;
        i++;
    }

    for (int pow = 1, i--; i >= 0; i--, pow <<= 1) {
        if (b[i] == '1')
            sum += pow;
        /**
         * 0011
         * 8421
         */
    }
    return sum;
}
