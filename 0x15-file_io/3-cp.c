#include "main.h"

/**
 * handle_errors - exits with certain codes based on conditions
 * @f1: argument
 * @f2: argument
 * @argv: array of arguments
 */

void handle_errors(int f1, int f2, char **argv)
{
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */

int main(int argc, char **argv)
{
	int f1, f2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	handle_errors(f1, f2, argv);
	r = read(f1, buffer, 1024);

	while (r > 0)
	{
		w = write(f2, buffer, r);
		handle_errors(r, w, argv);
	}
	r = close(f2);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	r = close(f1);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	free(buffer);
	return (0);
}
