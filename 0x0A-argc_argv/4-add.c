#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds pisitive numbers
 * @argc: count of arguments passed
 * @argv: string array of passed arguments
 * Return: 0 on success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum;
	
	if (argc < 2)
	{
		printf("0\n");
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
