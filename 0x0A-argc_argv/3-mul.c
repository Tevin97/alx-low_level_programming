#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers as arguments
 * @argc: count of arguments passed
 * @argv: string array of passed arguments
 * Return: 0 on succes, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
