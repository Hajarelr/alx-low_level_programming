#include "main.h"
/**
 * append_text_to_file - Function that appends text  at the end of a file
 * @filename: Pointer to the name of the file
 * @text_content: The string to aad at the end of the file
 * Return: 1 on success or if the the file exists and -1 on failure, if the
 * filename is NULL or if the file does not exist or if you do not have the
 * required permissions to write the file
 * The file should not be created if it doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int n, m, o = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (o = 0 ; text_content[o];)
o++;
}
n = open(filename, O_WRONLY | O_APPEND);
m = write(n, text_content, o);
if (n == -1 || m == -1)
return (-1);
close(n);
return (1);
}
