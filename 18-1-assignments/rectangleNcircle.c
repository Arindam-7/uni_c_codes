// Question number 2

#include<stdio.h>

int main() {
    float length, width, diameter, pi = 3.14;
    float recArea, recPerimeter, cirArea, circumference; 
    
    printf("\n Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("\n Enter the width of rectangle: ");
    scanf("%f", &width);
    printf("\n Enter the diameter of circle: ");
    scanf("%f", &diameter);

    // calculation
    recArea = length * width;
    recPerimeter = 2* (length + width);
    cirArea = pi * (diameter * diameter);
    circumference = (pi / 2) * diameter;

    printf("\n Area of given Rectangle: %.2f", recArea);
    printf("\n Perimeter of given Rectangle: %.2f", recPerimeter);
    printf("\n Area of given Circle: %.2f", cirArea);
    printf("\n Area of given Circle: %.2f \n", circumference);

    return 0;
}