#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1); /* Invalid filename */
	}

	if (text_content == NULL)
	{
		return (1); /* Nothing to add, return 1 if file exists, -1 if not */
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1); /* Unable to open file for appending */
	}

	bytesWritten = write(file, text_content, strlen(text_content));
	if (bytesWritten == -1)
	{
		close(file);
		return (-1); /* Write error */
	}

	close(file);

	return (1);
}
