#include "main.h"
#include <stdio.h>
/**
* main - print the number of arguments passed to the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
(void)argv;/*ignore argv*/
printf("%d\n", argc - 1);
return (0);
}


