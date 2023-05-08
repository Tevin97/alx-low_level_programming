#include "main.h"
/**
 * create_file - creates a file and writes a text content into it
 * @filename: pointer to filename string
 * @text_content: pointer to text content string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wcount, tcount = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[tcount] != '\0')
			tcount++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wcount = write(fd, text_content, tcount);

	if (wcount == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (-1);
}
