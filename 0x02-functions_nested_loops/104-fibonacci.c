#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	unsigned long long i, j, k;
	int x;

	i = 1;
	j = 2;
	printf("%llu, %llu, ", i, j);
	for (x = 1 ; x <= 96 ; x++)
	{
		k = i + j;
		printf("%llu", i + j);
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
