// Get a two-digit number from user and print the ten’s digit.
   //Example: Input: 45 Output 4. Input: 56 Output: 5

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int c = a % 100;
    printf("result: %d\n", c);
    return 0;
}