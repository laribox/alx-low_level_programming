/**
 * _isdigit - check if character is digit
 *@c: character to check
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
