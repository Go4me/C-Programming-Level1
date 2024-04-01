
/*Get a two digit number from user and subtract 5 from that number if the
sum of the digits of the number is odd, then print the result. Do not use
“if”.

Example: Input: 95 Output 95. Input: 72 Output: 67*/

#include <stdio.h>

int main() {
    int number, value1 , value2, value3, result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value1= number % 10;
    value2= number / 10;
    value3 = value1 + value2;

    
    switch( value3 % 2 ) {
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