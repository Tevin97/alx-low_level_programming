#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	free(*s);

	*s = malloc(strlen(to) + 1);

	strcpy(*s, to);
}
