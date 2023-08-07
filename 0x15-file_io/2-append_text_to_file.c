#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* append_text_to_file - APPENDS TEXT to END of a FILE
* @filename: NAME of FILE
* @text_content: CONTENT to append to FILE
*
* Return: 1 on success, -1 on FAILURE
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_result;
ssize_t len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
write_result = write(fd, text_content, len);
if (write_result == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}

