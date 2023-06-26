#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to string.
 */
void rev_string(char *s)
{
	int i;
	char t[900];

	for (i = (int)strlen(s) - 1; i >= 0 ; --i)
	{
		t[strlen(s) - i - 1] = s[i];
	}
	t[i] = '\0';
	strcpy(s, t);
}
