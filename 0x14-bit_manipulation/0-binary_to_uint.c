#include "main.h"
#include <stddef.h>
/**
* binary_to_uint -CONVERT a binary NUMBER TO  unsigned int.
* @b: A POINTER to a STRING of 0 and 1 CHARS.
*
* Return: CONVERTED NUMBER, or 0 if  is one or MORE CHARS
* in the string b that is not 0 or 1, or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
num <<= 1;
num += *b - '0';
b++;
}
return (num);
}
