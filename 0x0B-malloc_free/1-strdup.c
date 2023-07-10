#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string
* @str: the string to be duplicated
*
* Return: a pointer to the duplicated string, or NULL if insufficient memory
*/
char *_strdup(char *str)
{
char *dup;
unsigned int length = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
dup = malloc(sizeof(char) * (length + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= length; i++)
dup[i] = str[i];
return (dup);
}
