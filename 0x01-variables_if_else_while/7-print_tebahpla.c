#include<stdio.h>

#include<stdlib.h>

#include<time.h>

/**
 * main - Entry point
 * return: Always 0 (success)
 */

int main (void)

{

        char low;

        for (low = 'Z'; low >= 'a'; low--)
	putchar(low);
        putchar('\n');

        return (0);
}	

