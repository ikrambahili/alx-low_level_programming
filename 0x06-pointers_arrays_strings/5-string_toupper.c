#include "main.h"
/**
*string_toupper - change all lowercase to uppercase
*@str: pointer  to the string to be modified
*
*Return: Pointer to the modified string
*/
char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}
