#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str:String to be encoded.
 *
 * Return: Returns the modified string.
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; i < (int)strlen(str); i++)
	{
		for (j = 0; j < (int)strlen(rot13); j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
