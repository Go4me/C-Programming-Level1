
/*Get a three-digit number from user and subtract 5 from that number if
one’s digit number and 100’s digit number are same, then print the
result. Do not use “if”.

Example: Input: 595 Output 590. Input: 372 Output: 372*/

#include <stdio.h>

int main() {
    int number, value1 , value2 , value3, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value1 = number % 10;
    value2 = (number / 10) % 10;
    value3 = number / 100;

    
    switch( value1 == value3 ) {
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