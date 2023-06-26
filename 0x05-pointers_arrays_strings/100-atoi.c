#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert from string to int
 * Return: A integer
 */
int _atoi(char *s)
{
	int i, j = 0, counter = 0;
	char string[5];

	for (i = 0 ; i < (int)strlen(s) ; ++i)
	{
		if (s[i] == '-')
		{
			++counter;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			string[j] = s[i];
			++j;
		}
	}
	if (counter % 2 != 0)
		return (atoi(string) * -1);
	else
		return (atoi(string));
}
