#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		o = open(filename, O_CREAT, 00600);
		close(o);
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}

	o = (filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
