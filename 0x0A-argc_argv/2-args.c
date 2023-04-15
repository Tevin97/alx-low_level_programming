#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count of arguments passed
 * @argv: string array of arguments passed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
