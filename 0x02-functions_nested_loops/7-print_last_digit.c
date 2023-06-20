int print_last_digit(int);
int _putchar(char);
/**
 * print_last_digit - get value of last digit
 *@c: character to check
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	int digit = c % 10;

	if (digit < 0)
	digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
