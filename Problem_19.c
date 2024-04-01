/*     Get a three-digit number from user and make the one’s digit as 2, then print it.

        Example: Input: 695 Output 692. Input: 182 Output: 182*/
    #include<stdio.h>
    int main() {
    int number;

    // Prompt the user to enter a two-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Set the one's digit to 0
    number /= 10;
    number *= 10;

    // Print the modified number
    printf("Output: %d\n", number+2);

    return 0;
}