/*
        Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and
    hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s digit

    Example: Input: 856 978 – Output: 1
    Input: 128 365 - Output: 2

*/
#include<stdio.h>
int main(){
    int a, b,c,d,e,f,g,h;
    printf("enter the 1st number: ");
    scanf("%d", &a);
    printf("enter the 2nd number: ");
    scanf("%d", &b);
    c= a%10;
    d= (a/10) %10;
    e= a / 100;
    f= b%10;
    g= (b/10) %10;
    h= b / 100;
    if(d>g){
        printf("%d",e-c);
    }
    else{
        printf("%d", h-f);
    }


}

// other approach:

/*  
#include<stdio.h>

int main() {
    int a, b;

    // Input two 3-digit numbers from the user
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    // Calculate the difference between the one's digit and hundred's digit
    int diff;
    if ((a % 100) / 10 > (b % 100) / 10) {
        diff = (a / 100) - (a % 10);
    } else {
        diff = (b / 100) - (b % 10);
    }

    printf("Output: %d\n", diff);

    return 0;
}




*/
