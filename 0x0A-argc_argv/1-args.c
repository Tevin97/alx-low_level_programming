#include<stdio.h>

/**
 *main - prints the number of arguments passesd on it
 *@argc: count of arguments passed
 *@argv: array of strings of arguments passed
 *Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
