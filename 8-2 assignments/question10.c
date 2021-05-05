// C program to find out sum of the following series.
// S=1!+2!+3!+4!+ ... +n!

#include<stdio.h>

// function declaration
double factorial(int);

int main() {
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // calculation
    for (i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }

    printf("\n S=1!+2!+ ..+%d! = %d \n", n, sum);

    return 0;
}

double factorial (int a) {
    int i, f = 1;

    for (i = 1; i <= a; i++)
    {
        f *= i;
    }

    return f; 
}