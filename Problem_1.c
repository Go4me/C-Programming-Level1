// Get a number from user and add 2 to that number and print the result.
//   Example: Input :45 Output 47. Input:56789 Output:56791


#include<stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int b = a + 2;
    printf("Result: %d\n", b);
    return 0;
}
