#include "main.h"

/**
 * _strpbrk - finds the first occurrence of any character in @accept
 *            in string @s
 * @s: the string to search through
 * @accept: the characters to look for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*a == *s)
			{
				retun (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
