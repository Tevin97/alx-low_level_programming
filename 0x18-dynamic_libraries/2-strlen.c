#include "main.h"
/**
 * _strlen - Computes the length of a string
 *
 * @s: Pointer to input string
 *
 * Return: Length of string (excluding null byte)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
