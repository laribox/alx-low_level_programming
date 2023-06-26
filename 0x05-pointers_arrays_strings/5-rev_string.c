#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to string.
 */
void rev_string(char *s)
{
	int i,t;

	for (i = 0; i < (int)strlen(s) / 2; ++i)
	{
		t = s[strlen(s) - i];
		*s[strlen(s) - i] = s[i];
		*s[i] = t;		
	}
}
