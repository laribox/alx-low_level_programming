#include <string.h>
void print_alphabet_x10(void);
int _putchar(char);
/**
 * print_alphabet - print alphabet lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char lowercaseAlphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{	
		for (i = 0 ; i < (int) strlen(lowercaseAlphabets); i++)
		{
			_putchar(lowercaseAlphabets[i]);
		}
	}
}
