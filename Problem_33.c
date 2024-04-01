/*  Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Example: Input: 56 78 – Output: 15
Input: 14 65 - Output: 11  */

 
#include<stdio.h>
int main(){
    int a, b,c,d,e;
    printf("enter the 1st number: ");
    scanf("%d", &a);
    printf("enter the 2nd number: ");
    scanf("%d", &b);
    if(a>b){
        c= a%10;
        d= a/10;
        e= c+d;
        printf("%d",e);
    }
    else{
        c= b%10;
        d= b/10;
        e= c+d;
        printf("%d", e);
    }


}