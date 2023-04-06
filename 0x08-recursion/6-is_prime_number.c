#include "main.h"

int eval_prime(int n, int j);

/**
 * is_prime_number - returns if input is a prime number or not
 * @n: input number
 * Return: 1 if input is prime and 0, otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (eval_prime(n, n - 1));
}

/**
 * eval_prime - returns 1 if input number is a prime number, and 0 otherwise
 * @n: input number
 * @j: iteration times
 * Returns: 1 when input number is a prime number, 0 otherwise
 */

int eval_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	else if (n % j == 0 && j > 0)
	{
		return (0);
	}
	else
	{
		return (eval_prime(n, j - 1));
	}
}
