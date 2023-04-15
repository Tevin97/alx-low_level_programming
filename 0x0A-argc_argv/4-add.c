#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds pisitive numbers
 * @argc: count of arguments passed
 * @argv: string array of passed arguments
 * Return: 0 on success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
