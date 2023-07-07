#include "main.h"

/**
 * main - Function that sums the positive arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, x;
	char *endptr;

	if (argc > 1)
	{
		for (i = 1; i < argc ; i++)
		{
			x = strtol(argv[i], &endptr, 10);
			if (!*endptr)
			{
				sum += x;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", sum);

	return (0);
}
