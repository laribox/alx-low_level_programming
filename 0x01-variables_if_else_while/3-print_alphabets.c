#include <stdio.h>

/**
 * main - prints alphabet letter lower and then upper with putchar
 * Return: 0 to exit
 */
int main(void)
{
	for (int i = 97; i <= 122; i++)
		putchar(i);

	for (int i = 65; i <= 90; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
