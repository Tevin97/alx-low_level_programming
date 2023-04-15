#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers as arguments
 * @argc: count of arguments passed
 * @argv: string array of passed arguments
 * Return: 0 on succes, 1 on error
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
