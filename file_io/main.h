#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/* Read and print the contents of a text file */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */