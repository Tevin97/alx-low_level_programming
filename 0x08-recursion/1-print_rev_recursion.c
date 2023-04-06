#include "main.h"
/**
 * _print_rev_recursion - Prints string iput in reverse
 * @s: Input
 * Returns - Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
