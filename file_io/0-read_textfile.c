#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it to POSIX stdout.
 * @filename: The name of the text file.
 * @letters: The maximum number of characters to read and print.
 * Return: The actual number of characters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    char *buffer;
    ssize_t bytesRead, bytesWritten;

    if (filename == NULL)
        return (0); /* Invalid filename */

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0); /* Unable to open file */

    buffer = (char *)malloc(letters + 1);
    if (buffer == NULL)
    {
        close(file);
        return (0); /* Memory allocation failed */
    }

    bytesRead = read(file, buffer, letters);
    if (bytesRead <= 0)
    {
        free(buffer);
        close(file);
        return (0); /* Read error */
    }

    buffer[bytesRead] = '\0'; /* Null-terminate the buffer */

    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    free(buffer);
    close(file);

    if (bytesWritten != bytesRead)
        return (0); /* Write error */

    return (bytesWritten);
}
