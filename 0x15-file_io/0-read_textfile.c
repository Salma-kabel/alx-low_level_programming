#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters to read
 * Return: Teads a text file and prints it to the POSIX standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	nread = read(file, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	if (file == -1 || nread == -1 || nwrite == -1 || nread != nwrite)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);
	return (nwrite);
}
