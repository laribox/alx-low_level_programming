#include "main.h"

/**
 * leet - Encodes a string .
 * @str: Pointer to string.
 * Return: Returns the pointer to the string.
 */
char *leet(char *str)
{
	int i, j;
	char *alph = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0 ; i < (int)strlen(str) ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
}
