#include "main.h"

/* Function prototype for _putchar */
int _putchar(char c);

/**
* _puts - prints a string, followed by a new line to stdout
* @str: string parameter to print
* Return: nothing
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

