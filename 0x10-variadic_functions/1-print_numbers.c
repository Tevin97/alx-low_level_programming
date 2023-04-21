#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers.
 *
 * @separator: String to be printed between numbers (const char *).
 * @n: Number of integers passed to the function (const unsigned int).
 *
 * Return: Nothing (Void).
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;

	va_start(my_args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_args, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(my_args);
}
