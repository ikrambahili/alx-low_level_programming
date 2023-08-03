#include "main.h"

/**
* get_bit - RETURNS VALUE of bit at a GIVEN index.
* @n: NUMBER to extract bit from.
* @index:  index of  bit to get (starting from 0).
*
* Return: VALUE of  bit at index index, or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}
