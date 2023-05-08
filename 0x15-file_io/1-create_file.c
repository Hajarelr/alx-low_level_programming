#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: Pointer to the name of the file to create
 * @text_content: A pointer to the string to write to the file
 * Return: 1 on success and -1 on failure, if te filename is NULL or create an
 * emty file is text_content is NULL
 * The created file must have: rw-------
 */
int create_file(const char *filename, char *text_content)
{
int a, b, c = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (c = 0; text_content[c];)
c++;
}
a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(a, text_content, c);
if (a == -1 || b == -1)
return (-1);
close(a);
return (1);
}
