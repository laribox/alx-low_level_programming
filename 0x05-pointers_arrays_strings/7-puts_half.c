#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string to use
 */
void puts_half(char *str)
{
	int i;

	for (i = 0 ; i < (int)strlen(str) / 2; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
