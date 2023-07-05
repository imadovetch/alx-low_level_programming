
/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
	putchar(*s);
}

