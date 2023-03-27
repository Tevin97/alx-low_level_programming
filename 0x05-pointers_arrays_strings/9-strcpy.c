#include "main.h"
/**
 * _strcpy - function that copies string pointed to by src
 * including terminating null byte (\0) to buffer pointed by dest
 * @dest: pointer to destination array where the content is to be copied
 * @src: pointer to source of data to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
		*temp++ = *src++;
	*temp = '\0';

	return (dest);
}
