#include <ctype.h>
int _islower(int c);
/**
 * _islower - check if character is upper or lower
 *@c: character to check
 * Return: 0 if upper and 1 if lower
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
