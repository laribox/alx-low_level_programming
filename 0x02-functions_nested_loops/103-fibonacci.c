#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	long long int i, j, k , s;
	long int x;

	i = 1;
	j = 2;
	s = i + j;
	for (x = 1 ; x <= 4000000 ; x++)
	{
		k = i + j;
		s += k;
		i = j;
		j = k;
	}
	printf("%lld",s);
	printf("\n");
	return (0);
}
