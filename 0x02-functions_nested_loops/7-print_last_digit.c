int print_last_digit(int);
int _putchar(char);
/**
 * print_last_digit - get value of last digit
 *@c: character to check
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
	c *= -1;
	_putchar((c % 10) + '0');
	return (c % 10);
}
