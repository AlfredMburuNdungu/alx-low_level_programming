#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ", " and printed in ascending order.
 * The two digits must be different, and 01 and 10 are considered the same combination.
 * Only the smallest combination of two digits is printed.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int digit1, digit2;

    for (digit1 = 0; digit1 < 9; digit1++) {
        for (digit2 = digit1 + 1; digit2 <= 9; digit2++) {
            putchar('0' + digit1);
            putchar('0' + digit2);

            if (digit1 < 8 || digit2 < 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

