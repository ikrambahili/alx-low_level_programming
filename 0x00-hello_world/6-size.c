#include<stdio.h>

/**
* main - Entry point
*
* Description: using sizeof to print the size of various types.
*
* Return: Always 0 (success)
*/
int main(void)

{
printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of short: %zu bytes\n", sizeof(short));
printf("Size of long: %zu bytes\n", sizeof(long));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of long double: %zu bytes\n", sizeof(long double));
return (0);
}
