#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that sums all its parameters.
 *
 * @n: Number of argumets passed to the function (const unsigned int).
 *
 * Return: Sum of all parameters (int).
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list my_args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (sum);

	va_start(my_args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_args, int);
	}

	va_end(my_args);

	return (sum);
}
