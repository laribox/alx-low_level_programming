#include <stdio.h>
/**
 * main - print alphabet lowercase
 * Return: 0
 */

int main(void)
{
	long i, j, k, s;
	long x;

	i = 1;
	j = 2;
	s = j;
	for (x = 1 ; x <= 1000; x++)
	{
		k = i + j;
		if (k >= 4000000)
			break;
		if (k % 2 == 0)
		{
			s += k;
		}
		i = j;
		j = k;
	}
	printf("%ld", s);
	printf("\n");
	return (0);
}
