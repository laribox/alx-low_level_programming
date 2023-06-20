void print_to_98(int n);
int _putchar(char);
/**
 * print_to_98 - adds two numbers
 *@n: number
 * Return: sum numbers
 */

void print_to_98(int n)
{
	int x;

	if (n < 0)
	{
		for (x = n ; x < (n * -1) + 98 ; x++)
		{
			_putchar(n + 1 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			_putchar(n + 1 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (x = n; x <= 98 - n ; x++)
		{
			_putchar(n+1 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
