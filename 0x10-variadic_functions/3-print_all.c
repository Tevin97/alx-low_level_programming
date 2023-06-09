#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep = "";
	va_list my_args;

	va_start(my_args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(my_args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(my_args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(my_args, double));
				break;
			case 's':
				str = va_arg(my_args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}

		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(my_args);
}
