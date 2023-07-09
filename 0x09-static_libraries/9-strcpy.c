#include "main.h"
/**
*char*_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int y;
int x;
while (*(src + y) != '\0')
{
y++;
}
for (; x < y; x++)
{
dest[x] = src[x];
}
dest[y] = '\0';
return (dest);
}
