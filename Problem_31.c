/*  Question: Get a three-digit number from user. If the sum of the digits is less than 10, then print
the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10,
then print the sum, otherwise add the digits of the sum, and print the sum.
Note: The result should be always single digit only.

    Example: Input: 123 – Output: 6

    Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
    Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)   */

 
#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, sum, finalSum;

    // Read the three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract digits
    digit1 = number / 100;  // Extract the hundreds place digit
    digit2 = (number / 10) % 10;  // Extract the tens place digit
    digit3 = number % 10;  // Extract the ones place digit

    // Calculate sum of digits
    sum = digit1 + digit2 + digit3;

    // Check if sum is less than 10
    if (sum < 10) {
        finalSum = sum; // If sum is already single digit, store it
    } else {
        // If sum is two digits, add its digits
        finalSum = (sum / 10) + (sum % 10);
        finalSum = finalSum/10;
    }

    // Print the final sum
    printf("Output: %d\n", finalSum);

    return 0;
}
