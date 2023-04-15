#include<stdio.h>

/**
 * main - prints program name
 * @argc: count of arguments passed
 * @argv: string array of arguments passed
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
