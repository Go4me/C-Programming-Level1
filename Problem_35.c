/*
       Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
    numbers. Print the sum of all the digits of the number whose sum of one’s and
    hundred’s digits is bigger.
    Example: Input: 856 978 – Output: 24
    Input: 128 365 - Output: 11

*/
#include <stdio.h>

int main() {
    int number1, number2, sum1, sum2;

    // Read two 3-digit numbers from the user
    printf("Enter two 3-digit numbers separated by space: ");
    scanf("%d %d", &number1, &number2);

    // Calculate the sum of one's and hundred's digits for both numbers
    sum1 = (number1 / 100) + (number1 % 10); // sum of one's and hundred's digits of number1
    sum2 = (number2 / 100) + (number2 % 10); // sum of one's and hundred's digits of number2

    // Calculate the sum of all digits for both numbers
    int sum_all_digits_number1 = number1 / 100 + (number1 % 100) / 10 + (number1 % 10);
    int sum_all_digits_number2 = number2 / 100 + (number2 % 100) / 10 + (number2 % 10);

    // Check which sum is bigger and print the sum of all digits of that number
    if (sum1 > sum2) {
        printf("Output: %d\n", sum_all_digits_number1);
    } else {
        printf("Output: %d\n", sum_all_digits_number2);
    }

    return 0;
}
