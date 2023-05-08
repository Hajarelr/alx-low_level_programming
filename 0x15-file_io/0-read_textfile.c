#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: 1st input
 * @letters: The number of letters readed and printed
 * Return: The actial number of letters could be readed and printed, 0 if it
 * fails, if filename is NULL or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *n;
ssize_t m;
ssize_t o;
ssize_t p;
m = open(filename, O_RDONLY);
if (m == -1)
return (0);
n = malloc(sizeof(char) * letters);
p = read(m, n, letters);
o = write(STDOUT_FILENO, n, p);
free(n);
close(m);
return (o);
}
