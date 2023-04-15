#include <stdio.h>
#include <string.h>
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
	int i;
	unsigned int sum = 0, j;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (j = 0; j < strlen(c); j++)
			{
				if (c[j] < 48 || c[j] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
			sum = sum + atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
