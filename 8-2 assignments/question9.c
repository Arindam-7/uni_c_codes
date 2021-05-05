// Write a program to find the octal equivalent of the entered integer.

#include<stdio.h>

int main() {
    int octal = 0, decimal, n, counter = 1, temp = 0;
    printf("\n Enter any number: \n");
    scanf("%d", &n);

    decimal = n;

    while (decimal > 0)
    {
        temp = (decimal % 8) * counter;
        octal += temp;
        decimal /= 8;
        counter *= 10;
    }

    printf("\n %d in Decimal = %d is Octal \n", n, octal);

    return 0;
    
}