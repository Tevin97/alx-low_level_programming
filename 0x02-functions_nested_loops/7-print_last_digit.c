#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @num: the integer to extract the last digit from.
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = (num % 10) >= 0 ? (num % 10) : -(num % 10);
	_putchar(last_digit + '0');

	return (last_digit);
}
