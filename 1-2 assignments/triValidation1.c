// Question 2(i) - Write a program to check whether a triangle is valid or not,
//  when (i) the three angles of the triangle are entered through the Keyboard d.

#include<stdio.h>

int main () {
    float a, b, c;
    printf("\n Enter value of first angle: \n");
    scanf("%f", &a);
    printf("\n Enter value of second angle: \n");
    scanf("%f", &b);
    printf("\n Enter value of third angle: \n");
    scanf("%f", &c);

    // calculation
    if (a + b + c == 180) {
        printf ("The triangle is valid. \n");
    } else {
        printf ("The triangle isn't valid. \n");
    }

    return 0;
}