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
	int fd, wcount, tcount;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		tcount = 0;
		while (text_content[tcount] != '\0')
			tcount++;

		wcount = write(fd, text_content, tcount);
		if (wcount == -1 || wcount != tcount)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (-1);
}
