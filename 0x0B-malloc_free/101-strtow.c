#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: input string to split
 *
 * This function splits a string into words separated by whitespace.
 * Output is an array of null-terminated strings, terminated by a NULL pointer.
 *
 * Return: pointer to array of strings, or NULL on error or empty input
 */

char **strtow(char *str)
{
	if (str == NULL || strlen(str) == 0)
	{
		return NULL;
	}

	int word_count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isspace(str[i]))
		{
			continue;
		}

		word_count++;
		while (!isspace(str[i]) && str[i] != '\0')
		{
			i++;
		}
	}

	char **words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	int word_index = 0;
	char *start = NULL;
	int length = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		 if (isspace(str[i]))
		 {
			 continue;
		 }
		 start = &str[i];
		 length = 0;
		 while (!isspace(str[i]) && str[i] != '\0')
		 {
			 i++;
			 length++;
		 }
		 words[word_index] = malloc((length + 1) * sizeof(char));
		 if (words[word_index] == NULL)
		 {
			 return (NULL);
		 }
		 strncpy(words[word_index], start, length);
		 words[word_index][length] = '\0';
		 word_index++;
	}

	words[word_index] = NULL;

	return (words);
}
