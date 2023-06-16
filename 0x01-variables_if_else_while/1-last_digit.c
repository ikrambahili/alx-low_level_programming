#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that assigns a random number to the variable n and
 *              prints the last digit of the number along with a corresponding message.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;

    srand(time(0));  /* Initialize random number generator */

    n = rand() - RAND_MAX / 2;  /* Generate random number for n */

    printf("Last digit of %d is %d", n, n % 10);

    if (n % 10 > 5)
        printf(" and is greater than 5\n");
    else if (n % 10 == 0)
        printf(" and is 0\n");
    else
        printf(" and is less than 6 and not 0\n");

    return 0;
}

