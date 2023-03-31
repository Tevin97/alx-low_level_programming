#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	if (s1[i] == s2[i])
	{
		return (0);
	}

	else if (s1[i] > s2[i])
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
