#include "main.h"

/**
 * main - Function to calc multiply of 2 numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
