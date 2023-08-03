#include "main.h"

/**
* set_bit - SETS VALUE of  bit to 1 at GIVEN index.
* @n: A PIONTER to NUMBER to modify.
* @index: index of bit to set (starting from 0).
*
* Return: 1 if it WORKED, or -1 if an error OCCURRED.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n |= (1UL << index);
return (1);
}
