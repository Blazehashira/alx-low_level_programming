#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The maximum number of letters to read
 *
 * Return:  actual no of letters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reading, writing, opening;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	opening = open(filename, O_RDONLY);
	reading = read(opening, buf, letters);
	writing = write(STDOUT_FILENO, buf, reading);
	if (writing == -1 || writing != reading)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(opening);
	return (writing);
}
