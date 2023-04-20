#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of string arguments passed.
 *
 * Return: 0 if successful. Error codes 1 or 2 if argument is incorrect.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	addr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(addr + i) & 0xff);
		if (i == num_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
