#include <stdio.h>

/**
 * main - prints alphabet letter with putchar
 * Return: 0 to exit
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
