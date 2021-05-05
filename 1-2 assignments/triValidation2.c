// Question 2(ii) - Write a program to check whether a triangle is valid or not, 
// when (ii) three sides of the triangle are entered through the keyboard.

#include<stdio.h>

int main() {
    float a, b, c;
    printf("\n Enter length of first side: \n");
    scanf("%f", &a);
    printf("\n Enter length of second side: \n");
    scanf("%f", &b);
    printf("\n Enter length of third side: \n");
    scanf("%f", &c);

    // calculation
    if (a + b > c) {
        printf("The triangle is valid. \n");
    } else if (a + c > b) {
        printf("The triangle is valid. \n");
    } else if (b + c > a) {
        printf("The triangle is valid. \n");
    } else {
        printf("The triangle is not valid. \n");
    }

    return 0;
}