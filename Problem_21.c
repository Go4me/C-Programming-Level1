/*Get a number from user and subtract 5 from that number if the number

is odd, then print the result. Do not use “if”.
Example: Input: 695 Output 690. Input: 182 Output: 182 */

#include <stdio.h>

int main() {
    int number, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    switch(number % 2) {
        case 0:
            result = number;
            break;
        case 1:
            result = number - 5;
            break;
        default:
            printf("Invalid input\n");
            return 1;
    }
    
    printf("Result: %d\n", result);
    
    return 0;
}