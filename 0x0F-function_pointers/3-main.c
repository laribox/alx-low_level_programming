#include "3-calc.h"

/**
  * main - Start of the program
  * @argc: Length of args
  * @argv: Arguments
  *
  * Return: Nothing
  */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
