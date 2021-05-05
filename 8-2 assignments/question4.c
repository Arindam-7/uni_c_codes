// Write a C program to find out sum of the following series.
// S=1.2+2.3+3.4+4.5+ ... +n.(n+1)

#include<stdio.h>

int main(){
    int n, sum = 0, i;
    printf("\n Enter a number: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        sum = sum + (i * (i + 1));
    }

    printf("/n Sum of 1.2+2.3+3.4+...%d.%d is %d \n", n, n+1, sum);

    return 0;
}