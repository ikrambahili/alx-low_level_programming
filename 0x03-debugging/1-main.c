#include <stdio.h>

/**
* main - Entry point of the program
*
* This function causes an infinite loop.
* It demonstrates how an infinite loop can be avoided.
*
* Return: Always 0 (success)
*/
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
* while (i < 10)
*{
*putchar(i);
*}
* Infinite loop avoided! \o/
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}

