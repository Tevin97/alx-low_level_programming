#include <stdio.h>

/**
 * main - program prints the alphabet in lowercase,
 * followed by alphabets in capital.
 * Return: 0 on success
 */
int main(void)
{
	char alphabetrev[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
	putchar(alphabetrev[i]);
	}

	putchar('\n');
	return (0);
}
