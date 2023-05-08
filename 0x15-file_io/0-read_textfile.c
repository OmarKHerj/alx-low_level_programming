#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. If fails returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t open, read, write;
char *buffer = malloc(sizeof(char *) * letters);

if (filename == NULL)
return (0);
if (buffer == NULL)
return (0);

open = open(filename, O_RDONLY);
read = read(opens, buffer, letters);
write = write(STDOUT_FILENO, buffer, reads);

if (open == -1 || read == -1 || write == -1 || write != read)
{
free(buffer);
return (0);
}

free(buffer);
close(open);

return (write);
}
