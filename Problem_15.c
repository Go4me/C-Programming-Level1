/* Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
        Example: Input: 9561 Output 9516. Input: 3859 Output: 3895 
*/

#include <stdio.h>

int main() {
    int number, ones, tens, hundreds, thousands, output;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    // Extracting thousands digit
   thousands = number / 1000;

    // Extracting hundreds digit
   hundreds = (number / 100) % 10;

    // Extracting tens digit
    tens = (number / 10) % 10;

    // Extracting ones digit
    ones = number % 10;

    // Reversing the tens and ones digits
    output = thousands * 1000 + hundreds * 100 + ones * 10 + tens;

    printf("Output: %d\n", output);

    return 0;
}
