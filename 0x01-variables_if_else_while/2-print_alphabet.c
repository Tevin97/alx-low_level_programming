#include<stdio.h>
/**
 * main - program prints the alphabet in lowercase, followed by a new line.
 * Return: 0 on success
 */
int main(void)
{
	char alphalower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphalower[i] != '\0'; i++)
	{
		putchar(alphalower[i]);
	}
	putchar('\n');
	return(0);
}
