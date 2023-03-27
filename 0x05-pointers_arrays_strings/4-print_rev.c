#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	char *t;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	t = s - 1;
	while (len > 0)
	{
		_putchar(*t);
		t--;
		len--;
	}
	_putchar('\n');
}
