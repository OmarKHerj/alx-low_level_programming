#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writed in the file
 *
 * Return: 1 if it success. -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
int op, wr;
int x = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (x = 0; text_content[x];)
x++;
}

op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(op, text_content, x);

if (op == -1 || wr == -1)
return (-1);

close(op);

return (1);
}
