//Get a number from user and multiply 3 to that number and print the result.
//  Example: Input: 45 Output 135. Input: 1200 Output: 3600

#include<stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int b = a *  3;
    printf("Result: %d\n", b);
    return 0;
}