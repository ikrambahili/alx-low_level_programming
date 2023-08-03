#include "main.h"

/**
* get_endianness - CHECKS  endianness of SYSTEM.
*
* Return: 0 if BIG endian, 1 if LITTLE endian.
*/
int get_endianness(void)
{
unsigned int num = 1;
char *check_endianness = (char *)&num;
return (*check_endianness);
}
