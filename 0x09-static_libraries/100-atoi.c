#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert from string to int
 * Return: A integer
 */
int _atoi(char *s)
{
	int i, counter = 0, stop = 0, started = 0;
	unsigned int num = 0;

	for (i = 0 ; i < (int)strlen(s) ; ++i)
	{

		if (s[i] >= 48 && s[i] <= 57 && stop == 0)
		{
			num = num * 10 + (s[i] - '0');
			started = 1;
		}
		if (started == 1 && !(s[i] >= 48 && s[i] <= 57))
		{
			stop = 1;
		}
		if (s[i] == '-' && stop == 0)
		{
			++counter;
		}
	}
	if (counter % 2 == 0)
		return (num);
	else
		return (num * -1);
}
