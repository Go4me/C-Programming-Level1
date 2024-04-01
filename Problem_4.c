//Get a number from user and divide by the number by 6 and print the quotient.
   // Example: Input: 45 Output 7. Input: 143 Output: 23


#include<stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    float quotient = (float)a / 6;
    printf("Quotient: %.2f\n", quotient);
    return 0;
}
