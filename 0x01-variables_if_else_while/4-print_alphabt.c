#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e' followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /**
     * Print the lowercase alphabet excluding 'q' and 'e'
     */
    for (letter = 'a'; letter <= 'z'; letter++) {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
    }

    putchar('\n');

    return 0;
}

