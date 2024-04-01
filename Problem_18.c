// Get a two-digit number from user and make the tens digit 1, then print it.

//  Example: Input: 95 Output 15. Input: 82 Output: 12

#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Set the one's digit to 0
    number /= 10;
    number += 10;

    // Print the modified number
    printf("Output: %d\n", number);

    return 0;
}