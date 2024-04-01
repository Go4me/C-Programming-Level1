// Get a three-digit number from user and print the one’s digit.
    //Example: Input: 456 Output 6. Input: 569 Output: 9

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int c = a % 10;
    printf("result: %d\n", c);
    return 0;
}