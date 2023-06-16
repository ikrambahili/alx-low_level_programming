#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints the lowercase alphabet excluding 'q' and 'e' using putchar.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
    }

    putchar('\n');

    return(0);
}

