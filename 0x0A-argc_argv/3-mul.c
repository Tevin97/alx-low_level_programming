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
	int num1, num2, prod;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
