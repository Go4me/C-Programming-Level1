// Get a number from user and subtract 5 to that number and print the result.
//  Example: Input :45 Output 40. Input:56789 Output:56784

#include<stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int b = a - 5;
    printf("Result: %d\n", b);
    return 0;
}
