/*
       Question: Get a three-digit number from user and make the ten’s digit as 0,

then print it.

Example: Input: 695 Output 605. Input: 182 Output: 102

*/

#include <stdio.h>

int main() {
    int number, modifiedNumber;

    // Read a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Modify the tens digit to 0
    modifiedNumber = (number / 100) * 100 + (number % 10);

    // Print the modified number
    printf("Output: %d\n", modifiedNumber);

    return 0;
}

