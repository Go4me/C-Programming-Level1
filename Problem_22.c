/*Get a number from user and subtract 5 from that number if the number’s

ten’s position digit is odd, then print the result. Do not use “if”.

Example: Input: 685 Output 685. Input: 89172 Output: 89167 */

#include <stdio.h>

int main() {
    int number, value, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value= (number / 10) % 10;

    
    switch( value % 2 ) {
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