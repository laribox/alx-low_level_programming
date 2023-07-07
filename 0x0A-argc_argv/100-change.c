#include "main.h"
int getChange(int money);
/**
 * main - Function prints minimum number of coins to
 * to make change
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int money;


	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", getChange(money));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

/**
 * getChange - get the change
 * @money: money to get change for
 * Return: number of coins
 */
int getChange(int money)
{
	int coins = 0;

	while (money)
	{
		if (money >= 25)
		{
			coins++;
			money -= 25;
		}
		else if (money >= 10)
		{
			coins++;
			money -= 10;
		}
		else if (money >= 5)
		{
			coins++;
			money -= 5;
		}
		else if (money >= 2)
		{
			coins++;
			money -= 2;
		}
		else if (money >= 1)
		{
			coins++;
			money -= 1;
		}
	}
	return (coins);
}
