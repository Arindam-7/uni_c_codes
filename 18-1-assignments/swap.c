// Question number 1

#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c = a; // value of a stored in c
    a = b; // value of b stored in a
    b = c; // value of c restored in b

    printf("Value of a: %d, b: %d", a, b);
    return 0;
}