#include <stdio.h>

/**
 * main - prints alphabet letter with putchar
 * Return: 0 to exit
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49 ; j <= 57; j++)
		{
			for (k = 49 ; k <= 57 ; k++)
			{
				if (i != j && j != k && j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}

				if (i != j && j >= i && k > j && i != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
