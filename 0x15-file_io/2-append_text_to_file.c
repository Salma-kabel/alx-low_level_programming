#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file to append to
 * @textcontent: text to append
 * Return: 1 if success , -1 otherwise
 */ 

int append_text_to_file(const char *filename, char *text_content)
{
	int file, nwrite, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (textcontent != NULL)
	{
		len = strlen(textcontent);
	}

	write(file, textcontent, len);

	if (file == -1 || nwrite == -1)
		return (-1);

	close(file);
	return (1);
}
