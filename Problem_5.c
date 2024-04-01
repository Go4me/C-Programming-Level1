//Get a number from user and divide by the number by 8 and print the remainder.

    //Example: Input: 45 Output 5. Input: 143 Output: 7

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    float c = a % 8;
    printf("result: %.2f\n", c);
    return 0;
}
