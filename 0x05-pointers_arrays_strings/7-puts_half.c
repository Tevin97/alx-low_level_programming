#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string whose second half is to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		len--;
	}

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
