#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	long int i, j, k;
	int x;

	i = 1;
	j = 2;
	printf("%ld, %ld, ", i, j);
	for (x = 1 ; x <= 50 ; x++)
	{
		k = i + j;
		printf("%ld", k);
		if (x != 50)
		{
			printf(", ");
		}
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
