#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: returns a pointer to the concatenated string. Otherwise,
 *          returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat_str;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat_str[i] = s2[j];
		i++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
