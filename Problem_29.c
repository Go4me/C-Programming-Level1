/* Question: Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is greater than 10, then print “Success”, otherwise print
“Failure”.

    Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success. */

#include <stdio.h>

int main() {
    int number, value1 , value2, value3, value4;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value1 = number % 10;
    value2 = (number / 10) % 10;
    value3 = (number / 100);
    value4 = value2 + value3;
    

    
    switch( value4 > 10) {
        case 0:
            printf("Failure");
            break;
        case 1:
            printf("Success");
            break;
        default:
            printf("Invalid input\n");
            return 1;
    }
    
    return 0;
}