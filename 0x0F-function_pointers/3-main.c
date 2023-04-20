#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Takes in two integers and an operator and performs simple operations.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of string arguments passed.
 *
 * Return: 0 on success. Otherwise, returns appropriate error messages.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
