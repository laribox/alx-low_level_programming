#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to use
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; i < (int)strlen(str) ; i = i + 2)
	{
		_putchar(str[i]);
	} 
	_putchar('\n');
}
