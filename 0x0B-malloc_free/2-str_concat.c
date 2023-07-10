#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: First string
 * @s2: Second String
 * Return: Pointer to the conct string
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int len1, len2, i;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}

	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	conct = malloc(len1 + len2 + 1);
	if (conct == NULL)
		return (NULL);

	for (i = 0; i < len1 ; i++)
	{
		conct[i] = s1[i];
	}
	for (i = 0; i < len2 ; i++)
	{
		conct[i + len1] = s2[i];
	}
	conct[len1 + len2] = '\0';

	return (conct);

}
