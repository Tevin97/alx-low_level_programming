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
	int i, word_count = 0;
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return NULL;
	}

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

	words = (char **) malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < strlen(str); i++)
	{
		 if (isspace(str[i]))
		 {
			 continue;
		 }
		 char *start = &str[i];
		 int length = 0;
		 while (!isspace(str[i]) && str[i] != '\0')
		 {
			 i++;
			 length++;
		 }
		 words[word_count] = (char *) malloc((length + 1) * sizeof(char));
		 if (words[word_count] == NULL)
		 {
			 return (NULL);
		 }
		 strncpy(words[word_count], start, length);
		 words[word_count][length] = '\0';
		 word_count++;
	}

	words[word_count] = NULL;

	return (words);
}
