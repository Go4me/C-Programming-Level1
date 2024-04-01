//   Get a two-digit number from user and print sum the digits.
//               Example : Input: 56 Output 11. Input: 69 Output: 15

#include <stdio.h>

int main() {
    // Declare variables
    int number, tens_digit, ones_digit, sum_of_digits;

    // Get a two-digit number from the user
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Extract the tens digit
    tens_digit = number / 10;

    // Extract the ones digit
    ones_digit = number % 10;

    // Calculate the sum of the digits
    sum_of_digits = tens_digit + ones_digit;

    // Print the sum of the digits
    printf("Sum of the digits: %d\n", sum_of_digits);

    return 0;
}
