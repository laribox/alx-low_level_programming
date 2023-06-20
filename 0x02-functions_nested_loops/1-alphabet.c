#include <unistd.h>
#include <string.h>

int _putchar(char);
void print_alphabet(void);

/**
 * main - print alphabet lowercase
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char lowercaseAlphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0 ; i < (int) strlen(lowercaseAlphabets); i++)
	{
		_putchar(lowercaseAlphabets[i]);
	}
}
