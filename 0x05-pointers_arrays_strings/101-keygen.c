#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff, random = 0;

	srand(time(0));

	while (sum < 2772)
	{
		random = 33 + rand() % 94;
		if (random + sum <= 2772)
		{
			password[index] = random;
			sum += password[index++];
			printf("%d\n", sum);
		}
		else
		{
			diff = 2772 - sum;
			sum += diff;
			password[index] = diff;
		}


	}
	printf("%s\n", password);

	return (0);
}
