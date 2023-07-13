#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: First string
 * @s2: Second String
 * @n: Size of s2 bytes to concate
 * Return: concatenated string pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j;
	char *conc;

	if (*s1 == NULL)
	{
		*s1 = "";
	}

	if (*s2 == NULL)
	{
		*s2 = "";
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	conc = malloc(strlen(s1) + 1 + n);
	if (conc == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < strlen(s1); i++)
	{
		conc[i] = s1[i];
	}
	for (j = i; j < strlen(s1) + n; j++)
	{
		conc[j] = s2[j - strlen(s1)];
	}

	conc[strlen(s1) + n] = '\0';

	return (conc);
}
