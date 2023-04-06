#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate root
 * Return: the resulting squareroot
 */
int natural_sqrt_recursion(int n, int j);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - returns
 * @n: number to calculate root for
 * @j: iterator
 * Return: the resulting square root
 */
int natural_sqrt_recursion(int n int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j > n)
	{
		return (-1);
	}
	else
	{
		return (natural_sqrt_recursion(n, j + a));
	}
}
