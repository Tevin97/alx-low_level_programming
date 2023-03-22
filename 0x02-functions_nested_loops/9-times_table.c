#include "main.h"

/**
 * times_table - prints the 9 times table starting at 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		_putchar(44);
		_putchar(' ');

		for (j = 1; j < 10; j++)

		{
			result = i * j;

			if (result <= 9)
			{
				_putchar(' ');
				_putchar(result + 48);
			}
			else
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
			}

			if (j != 9)
			{
				_putchar(44);
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
