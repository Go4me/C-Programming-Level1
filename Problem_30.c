/*    Question: Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is equal to 10, and one of the digits is more than 7 then
print “Success”, otherwise print “Failure”. 
Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.*/

 
#include <stdio.h>

int main() {
    int number, value1 , value2, value3, value4;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);
    value1 = number % 10;
    value2 = (number / 10) % 10;
    value3 = (number / 100);
    value4 = value2 + value3;
    

    
    switch( value4 == 10 && value1 > 7) {
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