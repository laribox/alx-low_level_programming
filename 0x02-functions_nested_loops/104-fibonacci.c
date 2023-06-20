#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	unsigned int i, j, k;
	int x;

	i = 1;
	j = 2;
	printf("%u, %u, ", i, j);
	for (x = 1 ; x <= 96 ; x++)
	{
		k = i + j;
		printf("%u", k);
		if (x != 48)
		{
			printf(", ");
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
