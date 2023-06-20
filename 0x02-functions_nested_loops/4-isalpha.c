#include <ctype.h>
int _isalpha(int c);
/**
 * _isalpha - check if character is letter
 *@c: character to check
 * Return: 1 if letter and 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
