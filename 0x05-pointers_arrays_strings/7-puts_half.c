#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string to use
 */
void puts_half(char *str)
{
	int i,x;

	if (strlen(s) % 2 == 0)
		x = 0;
	else
		x = 1;
	for (i = ((int)strlen(str) / 2) - x; i < (int)strlen(str); ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
