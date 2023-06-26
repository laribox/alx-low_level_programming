#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: String pointer.
 */
void print_rev(char *s)
{
	int i;

	for (i = (int)strlen(s) - 1 ; i >= 0 ; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
