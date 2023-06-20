void print_times_table(int n);
int _putchar(char);
/**
 * print_times_table- print multiplication table
 * @n: time to multiplate
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n != 0)
	{
		for (i = 0 ; i <= n; i++)
		{
			for (j = 0 ; j <= n; j++)
			{
				if ((i * j) > 9 && (i * j) < 100)
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else if ((i * j) > 99)
				{
					_putchar((i * j) / 100 + '0');
					_putchar(((i * j) / 10) % 10 + '0');
					_putchar((i * j) % 10 + '0');

				}
				else
				{
					_putchar((i * j) + '0');
				}

				if (j != n )
				{
					_putchar(',');
					if (((j + 1) * i) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (((j + 1) * i) > 9 && ((j + 1) * i) < 100)
					{
						_putchar(' ');
					}
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}    
}
