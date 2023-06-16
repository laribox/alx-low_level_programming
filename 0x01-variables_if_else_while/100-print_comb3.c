#include <stdio.h>

/**
 * main - prints alphabet letter with putchar
 * Return: 0 to exit
 */
int main(void)
{
	int i,j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49 ; j <= 57; j++)
		{
			if (i != j && j > i )
			{
				putchar(i);
				putchar(j);
			}

			if(i != j && j >= i && i != 56 )
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
