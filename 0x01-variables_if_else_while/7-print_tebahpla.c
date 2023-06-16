#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A C program that prints the lowercase alphabet in reverse using putchar.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--)
        putchar(letter);

    putchar('\n');

    return 0;
}

