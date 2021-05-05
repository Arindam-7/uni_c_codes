// Write a C program to find out sum of digits of a given number.

#include<stdio.h>

int main() {
    int a, sum = 0, remainder = 0;
    printf("\n Enter a number: \n");
    scanf("%d", &a);

    // calculation
    while (a!=0)
    {
       remainder = a % 10;
       sum = sum + remainder;
       a = a / 10;
    }
    
    printf("\n Sum of digits is %d \n", sum);

    return 0;
}