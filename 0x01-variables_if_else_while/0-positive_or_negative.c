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
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("0 is zero");
	return (0);
}
