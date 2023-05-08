#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *n);
void close_file(int m);
/**
 * create_buffer - Function that allocates 1024 bytes to a buffer
 * @n: 1st input
 * Return: Pointer to the buffer allocated
 */
char *create_buffer(char *n)
{
char *o;
o = malloc(sizeof(char) * 1024);
if (o == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", n);
exit(99);
}
return (o);
}
/**
 * close_file - Function that close file descriptors
 * @m: The file descriptor that we went to close
 * Return: Void
 */
void close_file(int m)
{
int p;
p = close(m);
if (p == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
exit(100);
}
}
/**
 * main - Function that copies the contents of a file to another one
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0 success
 * if file_from does not exist, or if we can't read it, exit with code 98
 * if file_to can't be created or if write on it fails, exit with code 99
 * if we can't close a file descriptor, exit with code 100
 */
int main(int argc, char *argv[])
{
int a, b, c, d;
char *e;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
e = create_buffer(argv[2]);
a = open(argv[1], O_RDONLY);
c = read(a, e, 1024);
b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (a == -1 || c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(e);
exit(98);
}
d = write(b, e, c);
if (b == -1 || d == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write toError: Can't write to %s\n",
argv[2]);
free(e);
exit(99);
}
c = read(a, e, 1024);
b = open(argv[2], O_WRONLY | O_APPEND);
} while (c > 0);
free(e);
close_file(a);
close_file(b);
return (0);
}
