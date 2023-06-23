#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: pointer to the destination string, where src will be appended
 * @src: pointer to the source string, which will be appended to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
