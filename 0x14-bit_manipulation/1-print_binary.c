#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int i = 0, count = 0;
	unsigned long int current;

	for (mask = n; mask > 0; mask >>= 1)
		i++;

	for (; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count || i == 0)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
