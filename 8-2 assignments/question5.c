// Write a C program to find out factorial of a given number.

#include<stdio.h>

int main() {
    int i, n, f=1;

    printf("Enter a number for calculating factorial: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        f = f * i;
    }

    printf("Factorial of %d = %d \n", n, f);

    return 0;
}
