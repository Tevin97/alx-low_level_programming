#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Determines the endianness of the system
 *
 * Return: 1 if little-endian, 0 if big-endian
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	return (*p == 1);
}
