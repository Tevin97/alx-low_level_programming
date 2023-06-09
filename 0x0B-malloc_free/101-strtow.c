#include <stdlib.h>
#include "main.h"


/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int flag, i, word_count;

	flag = 0;
	word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
	}


	return (word_count);
}

/**
 * strtow - splits a string into words
 * @str: input string to split
 *
 * Return: pointer to array of strings, or NULL on error or empty input
 */

char **strtow(char *str)
{
	char **matrix_arr, *temp_str;
	int i, k = 0, len = 0, num_words, char_count = 0, start_pos = -1;
	size_t j;

	while (str[++len])
		;
	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	matrix_arr = (char **) malloc(sizeof(char *) * (num_words + 1));

	if (matrix_arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				temp_str = (char *) malloc(sizeof(char) * (char_count + 1));

				if (temp_str == NULL)
					return (NULL);

				for (j = 0; j < (size_t) char_count; j++)
					temp_str[j] = str[start_pos + 1 + j];


				temp_str[char_count] = '\0';

				matrix_arr[k++] = temp_str;
				char_count = 0;
			}
		}
		else 
		{
			if (char_count == 0)
				start_pos = i - 1;

			char_count++;
		}
	}

	matrix_arr[k] = NULL;

	return (matrix_arr);
}
