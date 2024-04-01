/*
        Get a two-digit number from user and print the reverse of the number.
            Example: Input: 56 Output 65. Input: 59 Output: 95
*/

#include <stdio.h>

int main() {
    // Declare variables
    int number, tens_digit, ones_digit, reversed_number;

    // Prompt the user to enter a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Extract the tens digit
    tens_digit = number / 10;

    // Extract the ones digit
    ones_digit = number % 10;

    // Reverse the number
    reversed_number = ones_digit * 10 + tens_digit;

    // Print the reversed number
    printf("Reversed number: %d\n", reversed_number);

    return 0;
}
