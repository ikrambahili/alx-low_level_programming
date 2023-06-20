#include <unistd.h>
#include "main.h"
/**
*_putchar -  writes the chracter C to stdout
*@C: the character to print
*
*Return: on success 1.
*on error, -1 is returned and error is sent approprity
*/
int _putchar(char C)
{
return (write(1, &c, 1));
}
