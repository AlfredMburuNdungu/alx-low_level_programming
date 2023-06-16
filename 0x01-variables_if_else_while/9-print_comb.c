#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ", " and printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int digit;

    for (digit = 0; digit <= 9; digit++) {
        putchar('0' + digit);

        if (digit < 9) {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return 0;
}

