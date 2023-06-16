#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if a number is positive or negative
 * Return: 0 to exit the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	if (n <= 10 && n >= -10)
	{
		if (n > 5)
		{
			printf(" %d and is greater than 5", n);
		}
		else if (n < 6 && n != 0)
		{
			printf(" %d and is less than 6 and not 0", n);
		}
		else
		printf(" %d and is 0", n);
	}
	else
	{
		if (n % 10 > 5)
		{
			printf(" %d and is greater than 5", n % 10);
		}
		else if (n % 10 < 6 && n % 10 != 0)
		{
			printf(" %d and is less than 6 and not 0", n % 10);
		}
		else
		printf(" %d and is 0", n % 10);
	}
		printf("\n");
	return (0);
}
