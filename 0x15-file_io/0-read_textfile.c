#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: textfile to read
 * @letters: number of letters to read and print
 * Return: 0 if filename is NULL or cannot be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(1, buffer, r);

	if (o == -1 || w == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (w);
}
