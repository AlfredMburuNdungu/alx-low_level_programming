#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet, followed by the uppercase alphabet,
 *              each on a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /**
     * Print lowercase alphabet
     */
    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }

    putchar('\n');

    /**
     * Print uppercase alphabet
     */
    for (letter = 'A'; letter <= 'Z'; letter++) {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}

