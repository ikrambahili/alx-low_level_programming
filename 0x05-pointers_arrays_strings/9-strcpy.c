#include "main.h"
/**
* _strcpy - copies the string pointed to by src
* @dest: destination string
* @src: source string
* Description: Copy the string pointed to by 'src'
* to the buffer pointed to by 'dest'
* Return: Pointer to 'dest'
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';

return (dest);
}

