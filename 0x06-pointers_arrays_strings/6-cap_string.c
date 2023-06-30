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
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
