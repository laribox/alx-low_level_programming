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
	srand(time(NULL));
	int i;
	const int string_length = 10;
	const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char special[] = "!@#$%^&*()";
	const char numbers[] = "0123456789";
	char password[string_length + 1];

	for (i = 0 ; i < string_length ; ++i)
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

	printf("%s\n", password);
}
