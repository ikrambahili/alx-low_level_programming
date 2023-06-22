#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: character to print
*
* Return: On success, it returns 1. On error,
*it returns -1, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

