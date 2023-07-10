#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program
* @ac: the number of arguments
* @av: the array of arguments
*
* Return: a pointer to the concatenated string, or NULL on failure
*/
char *argstostr(int ac, char **av)
{
char *concat;
int i, j;
int total_length = 0;
int index = 0;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* Account for the new line character */
}
/* Allocate memory for the concatenated string */
concat = malloc(sizeof(char) * (total_length + 1));
if (concat == NULL)
return (NULL);
/* Copy each argument and add new line character */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concat[index] = av[i][j];
index++;
}
concat[index] = '\n';
index++;
}
concat[index] = '\0';
return (concat);
}

