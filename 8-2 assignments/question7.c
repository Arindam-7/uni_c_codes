// Write a C program to print the first n numbers 
// of the Fibonacci sequence. 
// The Fibonacci sequence is constructed by adding 
// the last two numbers of the sequence so far to get 
// the next number in the sequence. 
// The first and second numbers of the sequence are defined as 0 and 1. 
// We get:
// 0, 1, 1, 2, 3, 5, 8, 13, 21…

#include<stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("\n Enter a number: \n");
    scanf("%d", &n);

    printf("\n Fibonacci series:  ");

    // calculation
    for (int i = 1; i <= n; i++) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c; 
    }

    printf("\n");

    return 0;
}