#include<stdio.h>
/**
 * main - program prints the alphabet in lowercase, followed by a new line.
 * Returns: 0 when run successful
 */
int main(void)
{
	char alphalower[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphalower[i]);
	}
	putchar(\n);
	Return(0);
}
