#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: string pointer.
 *
 * Return: Pointer to the string that has been changed.
 */
char *cap_string(char *str)
{
	int i;
	
	for (i = 0; i < (int)strlen(str) ; i++)
	{
		if ((str[i] > 32 && str[i] < 48) ||
		(str[i] > 57 && str[i] < 64) || str[i] > 122 ||
		str[i] == " " || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i] -= 32;
		}
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && i == 0)
			str[i] -= 32;
	}
	return (str);
}
