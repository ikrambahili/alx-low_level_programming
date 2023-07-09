#include "main.h"
/**
*_strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (success)
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *ptr = haystack;
char *p = needle;
while (*ptr == *p && *p != '\0')
{
ptr++;
p++;
}
if (*p == 0)
return (haystack);
}
return (0);
}
