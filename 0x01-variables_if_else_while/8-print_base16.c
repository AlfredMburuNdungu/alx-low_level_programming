#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 (hexadecimal) in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int digit;

    for (digit = 0; digit < 10; digit++) {
        putchar('0' + digit);
    }

    for (digit = 'a'; digit <= 'f'; digit++) {
        putchar(digit);
    }

    putchar('\n');

    return 0;
}

