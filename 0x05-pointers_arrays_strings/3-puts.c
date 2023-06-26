#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to string.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); ++i)
	{
		_putchar(str[i] + '0');
	}
	_putchar('\n');
}
