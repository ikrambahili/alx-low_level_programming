#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that assigns a random number to the variable n and
 *              prints whether the number is positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;

    srand(time(0));  /* Initialize random number generator */

    n = rand() - RAND_MAX / 2;  /* Generate random number for n */

    printf("The number %d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");

    return 0;
}

