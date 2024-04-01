//Get a two-digit number from user and print sum the digits.
//Example: Input: 56 Output 11. Input: 69 Output: 15

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    // Extracting the digits
    int first_digit = a / 10;  // Get the tens place digit
    int second_digit = a % 10; // Get the ones place digit

    // Calculating the sum of digits
    int sum = first_digit + second_digit;

    printf("Sum of digits: %d\n", sum);
    return 0;
}
