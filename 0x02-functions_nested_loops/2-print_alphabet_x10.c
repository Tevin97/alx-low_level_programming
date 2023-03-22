#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char t;
	int i = 0;

	while (i < 10)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		i++;
	}
}
