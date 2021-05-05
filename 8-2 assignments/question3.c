// Write a C program to find out sum of the following series.
// S=1+2+3+4+ ... +n

#include<stdio.h>

int main() {
    int n, sum = 0, i;
    printf("\n Enter a number: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        sum = sum + i;
    }

    printf("/n Sum of 1+2+3+...%d is %d \n", n, sum);

    return 0;
}