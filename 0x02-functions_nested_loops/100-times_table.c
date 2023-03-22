#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: integer input value
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				int result = i * j;

				_putchar(',');
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar(' ');
				if (result >= 100)
					_putchar((result / 100) + '0');
				if (result >= 10)
					_putchar(((result / 10)) % 10 + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
