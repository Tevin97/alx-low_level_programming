#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing concatenated
 *         string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len++;
	}
	while (s2[len2])
	{
		len2++;
	}

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated == NULL)
	{
		return(NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		concatenated[i] = s2[j];
	}

	concatenated[i] = '\0';

	return (concatenated);
}
