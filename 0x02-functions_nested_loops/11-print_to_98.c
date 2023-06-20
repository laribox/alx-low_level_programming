void print_to_98(int n);
int _putchar(char);
/**
 * print_to_98 - adds two numbers
 *@n: number
 * Return: sum numbers
 */

void print_to_98(int n)
{
	int x, y;

	if (n < 0)
	{
		for (x = n ; x <= 98 ; x++)
		{
			if (x < 0)
			{
				_putchar('-');
				y = x * -1;
			}
			else
				y = x;
			if (y > 9 && y < 100)
			{
				_putchar((y / 10) + '0');
				_putchar(y % 10 + '0');

			}
			else if (y > 99)
			{
				_putchar((y / 100) + '0');
				_putchar((y / 10) % 10 + '0');
				_putchar((y % 10) + '0');

			}
			else
			{
				_putchar(y + '0');
			}

			if (x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (x = n; x <= 98; x--)
		{
			if (x > 9 && x < 100)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');

			}
			else if (x > 99)
			{
				_putchar(x / 100 + '0');
				_putchar((x / 10) % 10 + '0');
				_putchar(x % 10 + '0');

			}
			else
			{
				_putchar(x + '0');
			}

			if (x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		if (n == 98)
		{
			_putchar('9');
			_putchar('8');				
		}
		else
		{
			for (x = n; x <= 98 - n ; x++)
			{
				if (x > 9)
				{
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');

				}
				else if (x > 99)
				{
					_putchar(x / 100 + '0');
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
				}
				else
				{
					_putchar(x + '0');
				}
				if (x != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
