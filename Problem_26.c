/* Get a two-digit number from user. If the sum of the digits is 10 then print
            “Success”, otherwise print “Failure”.
Example: Input: 56 - Output Failure. Input: 37 - Output: Success. */

#include <stdio.h>

int main() {
    int number, value1 , value2, value3;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value1 = number % 10;
    value2 = (number / 10);
    value3 = value1 + value2;
    

    
    switch( value3 == 10) {
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