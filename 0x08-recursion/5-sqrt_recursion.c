#include "main.h"

int natural_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate root
 * Return: the resulting squareroot
 */

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
int natural_sqrt_recursion(int n, int j)
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
		return (natural_sqrt_recursion(n, j + 1));
	}
}
