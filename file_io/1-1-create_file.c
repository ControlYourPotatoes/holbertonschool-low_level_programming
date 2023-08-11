#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h> /* For strlen */
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1); /* Invalid filename */
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1); /* Unable to create or open file */
	}

	if (text_content != NULL)
	{
		bytesWritten = write(file, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(file);
			return (-1); /* Write error */
		}
	}

	close(file);

	return (1);
}
