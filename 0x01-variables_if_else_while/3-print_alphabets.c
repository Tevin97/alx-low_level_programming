#include <stdio.h>

/**
 * main - program prints the alphabet in lowercase,
 * followed by alphabets in capital.
 * Return: 0 on success
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
	putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
