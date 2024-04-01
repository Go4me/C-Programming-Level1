/* Get four-digit number from user and subtract 5 from that number if
ten’s digit position and 100’s digit position is same, then print the result.
Do not use “if”.

Example: Input: 7595 Output 7595. Input: 3772 Output: 3767 */

#include <stdio.h>

int main() {
    int number, value1 , value2 , value3, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value1 = number % 10;
    value2 = (number / 10) % 10;
    value3 = (number / 100);

    
    switch( value2 == value3 ) {
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