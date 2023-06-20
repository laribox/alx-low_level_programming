#include <main.h>


/**
 * print_alphabet - print alphabet lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char lowercaseAlphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0 ; i < (int) strlen(lowercaseAlphabets); i++)
	{
		_putchar(lowercaseAlphabets[i]);
	}
}
