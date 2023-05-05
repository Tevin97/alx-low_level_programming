#include "main.h"
#include <stddef.h>


/**
 * binary_to_uint - convert a binary number to an unsigned int.
 *
 * @b: string representation of binary number.
 *
 * Return: converted unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		result += (*b == '1') ? 1 : 0;

		b++;

	}

	return (result);
}
