#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	long double i, j, k;
	int x;

	i = 1;
	j = 2;
	printf("%.0Lf, %.0Lf, ", i, j);
	for (x = 1 ; x <= 96 ; x++)
	{
		k = i + j;
		printf("%.0Lf", i + j);
		if (x != 96)
		{
			printf(", ");
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
