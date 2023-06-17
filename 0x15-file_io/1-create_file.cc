#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file to create
 * @text_content: text to write
 * Return: 1 if success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file, nwrite, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);

	if (text_content != NULL)
		len = strlen(text_content);

	nwrite = write(file, text_content, len);

	if (file == -1 || nwrite == -1)
		return (-1);

	close(file);
	return (1);
}
