#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if a character is a digit.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints an error message and exits with status 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two positive numbers.
 *
 * @num1: A string containing the first number.
 * @num2: A string containing the second number.
 *
 * Return: A pointer to a newly allocated string containing the result.
 */

char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, carry, product;
	char *result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		print_error();
	}
	memset(result, 0, sizeof(char) * (len1 + len2 + 1));
	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]))
		{
			print_error();
		}
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			if (!_isdigit(num2[j]))
			{
				print_error();
			}
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			carry = product / 10;
			result[i + j + 1] = carry;
		}
		result[i + j + 1] = carry;
	}
	i = 0;
	while (result[i] == '0' && i < len1 + len2 - 1)
	{
		i++;
	}
	char *final_result = strdup(&result[i]);

	free(result);
	return (final_result);
}

/**
 * main - multiplies two positive numbers.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error();
	}
	char *num1 = argv[1], *num2 = argv[2];
	char *result = multiply(num1, num2);

	if (result == NULL)
	{
		print_error();
	}
	int len = strlen(result), i = 0;

	for (; i < len; i++)
	{
		if (result[i] != '0')
		{
			break;
		}
	}
	if (i == len)
	{
		printf("0\n");
	}
	else
	{
		printf("%s\n", &result[i]);
	}

	free(result);

	return (0);
}
