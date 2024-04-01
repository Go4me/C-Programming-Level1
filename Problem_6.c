// Get a two-digit number from user and print the one’s digit.
    //Example: Input: 45 Output 5. Input: 56 Output: 6

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int c = a % 10;
    printf("result: %d\n", c);
    return 0;
}