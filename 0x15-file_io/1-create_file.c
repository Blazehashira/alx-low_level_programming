#include "main.h"

/**
 * create_file - creates a file with the given filename and writes the
 *               given text content to it.
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;

		if (write(fd, text_content, count) != count)
			return (-1);
	}

	close(fd);

	return (1);
}
