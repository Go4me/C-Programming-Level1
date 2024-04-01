/*  Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then

    print the sum, otherwise print the difference.

    Example: Input: 56 78 – Output: 22
    Input: 14 65 - Output: 79   */

 
#include<stdio.h>
int main(){
    int a, b,c,d;
    printf("enter the 1st number: ");
    scanf("%d", &a);
    printf("enter the 2nd number: ");
    scanf("%d", &b);
    c= a+b;
    d=a-b;
    if(c<100){
        printf("%d",c);
    }
    else{
        printf("%d", d);
    }


}