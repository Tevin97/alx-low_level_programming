#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings.
 *
 * @separator: String to be printed between strings (const char *).
 * @n: Number of string passed to the function (const unsigned int).
 *
 * Return: Nothing (Void).
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;
	char *str;


	va_start(my_args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(my_args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(my_args);
}
