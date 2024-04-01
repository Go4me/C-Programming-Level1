/*
        Get a three-digit number from user and print the reverse of the number.
            Example: Input: 561 Output 165. Input: 859 Output: 958
    
    */


   #include <stdio.h>

int main() {
    // Declare variables
    int number, hundreds_digit, tens_digit, ones_digit, reversed_number;

    // Prompt the user to enter a three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Extract the hundreds digit
    hundreds_digit = number / 100;

    // Extract the tens digit
    tens_digit = (number / 10) % 10;

    // Extract the ones digit
    ones_digit = number % 10;

    // Reverse the number
    reversed_number = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    // Print the reversed number
    printf("Reversed number: %d\n", reversed_number);

    return 0;
}
