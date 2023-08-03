#include "main.h"
#include <stdio.h>
int _putchar(char c);
/**
* print_binary - PRINTS binary REPRESENTATION of  number.
* @n: NUMBER to be PRINTED in BINARY.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int flag = 0;
if (n == 0)
{
_putchar('0');
return;
}
while (mask != 0)
{
if ((n & mask) != 0)
{
_putchar('1');
flag = 1;
}
else if (flag)
{
_putchar('0');
}
mask >>= 1;
}
}
