#include <stdio.h>

/**
 * main - prints alphabet letter with putchar
 * Return: 0 to exit
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48 ; i <= 57; i++)
	{
		for (j = 48 ; j <= 57; j++)
		{
			for (k = 48 ; k <= 57 ; k++)
			{
				for (l = 48 ; l <= 57 ; l++)
				{
					if (i + j < l + k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if (i + j < l + k && l + k + i + j != 227)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
