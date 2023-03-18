#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 * separated by ", "
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(44);
	putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
