#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 * Description: A C program that prints all possible combinations of single-digit numbers using putchar.
 * return: Always 0 (success)
 */

int main (void)

{
      int d;
       
       for (d= '0'; d <= '9'; d++)
       {
       putchar (d);
       if (d != '9')
       {
       putchar(',');
       putchar(' '); 	 
       }		
       }      
       putchar('\n');
       return (0);
 }
