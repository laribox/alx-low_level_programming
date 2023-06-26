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
	int i;
	const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char special[] = "!@#$%^&*()";
	const char numbers[] = "0123456789";
	char password[11];

	srand(time(NULL));
	for (i = 0 ; i < 10 ; ++i)
	{
		int randomNumber = rand() % 4;

		switch (randomNumber)
		{
			case 0:
				password[i] = lowercase[rand() % 26];
				break;
			case 1:
				password[i] = uppercase[rand() % 26];
				break;
			case 2:
				password[i] = special[rand() % 10];
				break;
			case 3:
				password[i] = numbers[rand() % 10];
				break;
		}
	}
	password[10] = '\0'; 
	printf("%s\n", password);
	return (0);
}
