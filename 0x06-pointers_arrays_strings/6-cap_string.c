#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: String pointer.
 *
 * Return: the string that has been changed.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
			str[i] -= 32;
	}
	return (str);
}
