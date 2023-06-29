#include "main.h"

/**
* _strncat - Concatenate two strings
* @dest: Pointer to destination string
* @src: Pointer to source string
* @n: Maximum number of bytes from @src
*
* Return: Pointer to @dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n &&  src[j]  !=  '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}

