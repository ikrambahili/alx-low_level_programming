#include "main.h"

/**
* _strstr - Locates a substring in a string.
* @haystack: Pointer to the string to search in.
* @needle: Pointer to the substring to be found.
*
* Return: A pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
j = 0;
k = i;
while (haystack[k] == needle[j] && haystack[k] != '\0' && needle[j] != '\0')
{
k++;
j++;
}

if (needle[j] == '\0')
return (&haystack[i]);
}
return (0);
}

