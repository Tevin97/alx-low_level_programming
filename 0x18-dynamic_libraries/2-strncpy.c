#include "main.h"
/**
 * _strncpy - a function that copies a string up to n characters.
 *
 * @dest: pointer to the destination string, where src will be copied
 * @src: pointer to the source string, which will be copied to dest
 * @n: maximum number of characters to be copied from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
