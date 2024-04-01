/*
        Get a three-digit number from user and print sum the digits.
                Example: Input: 562 Output 13. Input: 469 Output: 19

*/


#include <stdio.h>

int main() {
    // Declare variables
    int number, hundreds_digit, tens_digit, ones_digit, sum_of_digits;

    // Prompt the user to enter a three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the hundreds digit
    hundreds_digit = number / 100;

    // Extract the tens digit
    tens_digit = (number / 10) % 10;

    // Extract the ones digit
    ones_digit = number % 10;

    // Calculate the sum of the digits
    sum_of_digits = hundreds_digit + tens_digit + ones_digit;

    // Print the sum of the digits
    printf("Sum of the digits: %d\n", sum_of_digits);

    return 0;
}
