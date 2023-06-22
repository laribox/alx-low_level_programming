#include <ctype.h>
int _islower(int c);
/**
 * _isupper - check if character is upper
 *@c: character to check
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
