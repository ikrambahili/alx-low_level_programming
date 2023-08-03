#include "main.h"

/**
* clear_bit - SETS VALUE of  BIT  to 0 at a given index.
* @n: APOINTER to NUMBER To modify.
* @index:  index of bit to clear (starting from 0).
* Return: 1 if it WORKED, or -1 if an error OCCURRED.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1UL << index);
return (1);
}
