#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to add at the end of the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, tcount = 0, wcount;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[tcount] != '\0')
			tcount++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wcount = write(fd, text_content, tcount);

	if (fd == -1 || wcount == -1)
		return (-1);

	close(fd);
	return (1);
}
