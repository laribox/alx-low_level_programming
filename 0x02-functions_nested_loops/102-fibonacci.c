#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	int i, j, k, x;
	
	i = 1;
	j = 2;
	printf("%d, %d, ",i,j);
	for (x = 1 ; x <= 50 ; x++)
	{	
		k = i + j;
		printf("%d", k);
		printf(", ");
		
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
