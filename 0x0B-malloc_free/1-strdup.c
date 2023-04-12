#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *clone;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	clone = malloc(sizeof(char) * (i + 1));

	if (clone == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		clone[i] = str[i];
	}

	clone[i] = '\0';

	return (clone);
}
