#include "main.h"
/**
 * _strncat - a function that concatenates two strings up to n bytes.
 *
 * @dest: pointer to the destination string, where src will be appended
 * @src: pointer to the source string, which will be appended to dest
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
