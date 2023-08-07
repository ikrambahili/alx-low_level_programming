#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
* read_textfile - Reads  TEXT FILE  and Prints it to POSIX Standard output.
* @filename:  NAME of TEXT FILE to be Read.
* @letters: NUMBER of letters to read and print.
*
* Return:  Actual NUMBER of LETTRES read and printed.
*0 if FILE cannot be opened, read, OR if Write FAILS.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor;
char buffer[1024];
ssize_t total_read = 0;
ssize_t read_count;
ssize_t to_print;
ssize_t written;
if (filename == NULL)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
while (letters > 0 && (read_count = read
(file_descriptor, buffer, sizeof(buffer))) > 0)
{
to_print = read_count > (ssize_t)letters ? (ssize_t)letters : read_count;
written = write(STDOUT_FILENO, buffer, (size_t)to_print);
if (written != to_print)
{
close(file_descriptor);
return (0); /* WRITE FALIED OR didn't WRITE EXPECTED AMOUNT of bytes */
}
total_read += to_print;
letters -= (size_t)to_print;
}
close(file_descriptor);
return (total_read);
}

